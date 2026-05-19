# Unity Settings

Deze documentatie beschrijft de volledige technische configuratie, bestandsstructuur, componenten en achterliggende logica van het AR-project **InteractiveWall** voor de richting Elektronica-ICT aan Hogeschool VIVES. Dit document fungeert als een blauwdruk; een nieuwe ontwikkelaar kan met deze handleiding en de projectbestanden de volledige applicatie doorgronden, aanpassen en publiceren.

---

## 1. Project & Build Omgeving

De fundering van het project steunt op een specifieke Unity-architectuur om compatibiliteit met mobiele apparaten (Android tablets en iPad Pro) te garanderen.

### 1.1 Unity Installatie
**Engine Versie:** `6000.0.67f1 LTS` (Lange Termijn Ondersteuning).
**Render Pipeline:** `3D (Built-In Render Pipeline)`. Dit is verplicht om de custom shaders (zoals de achtergrondvervaging) te laten functioneren op mobiele GPU's. URP of HDRP corrumperen deze materialen.
**Geïnstalleerde Modules:** Microsoft Visual Studio Community 2022, Android Build Support (met OpenJDK, SDK & NDK), en iOS Build Support.

### 1.2 Android Player Settings (Deployment)
In `Edit > Project Settings > Player` zijn onderstaande configuraties onder **Other Settings** ingesteld om de AR-camera en de C#-scripts optimaal te laten draaien:
* **Minimum API Level:** `Android 8.0 (API level 26)` of hoger (minimale vereiste voor Vuforia).
* **Scripting Backend:** Ingesteld op `IL2CPP`. Dit compileert C# direct naar native C++ code voor zware prestatiewinst.
* **Target Architectures:** `ARMv7` is uitgevinkt, **ARM64** is verplicht aangevinkt (Vuforia vereist 64-bit).

### 1.3 Build Profiles (Scènes)
In `File > Build Profiles` staan de scènes in de volgende strakke volgorde (Index):
1. `hoofdmenu`
2. `ict`
3. `verpleegkunde`

---

## 2. Bestandsstructuur & Asset Configuratie

Het project is georganiseerd in een strikte en overzichtelijke mappenstructuur. Ieder Image Target heeft zijn eigen, zelfstandige ecosysteem.

### 2.1 Mappenstructuur per Image Target
Onder `Assets > Image Targets` heeft elk onderwerp (bijv. `PCB`, `Printer`, `Networks`) zijn eigen map. Elke specifieke map bevat de volgende vier elementen voor dat onderwerp:
* **De Poster (2D Image):** De fysieke afbeelding die gescand wordt. De **Texture Type** in de Inspector is handmatig ingesteld op `Sprite (2D and UI)` om vervormingen te voorkomen.
* **De Video (.mp4):** Het videobestand dat in AR wordt afgespeeld, staat direct in deze map (en dus nadrukkelijk niet in een aparte StreamingAssets folder).
* **De Render Texture:** Een op maat gemaakte texture (1920x1080) waar de video naartoe rendert.
* **De Prefab:** Het kant-en-klare 3D-object dat wordt ingeladen zodra de poster herkend wordt.

### 2.2 Materialen
Onder `Assets > Materials` staan alle materialen verzameld. Voor elk Image Target wordt hier een uniek materiaal aangemaakt dat gekoppeld is aan de Render Texture van dat specifieke onderwerp.

---

## 3. Vuforia Engine Configuratie

De kern van de Augmented Reality tracking. Ingesteld via `Window > Vuforia Configuration`.

* **App License Key:** Bevat de enterprise licentiesleutel voor onbeperkte tracking.
* **Camera Focus Mode:** Ingesteld op `CONTINUOUS_AUTOFOCUS` om onscherpte bij fysieke beweging van de tablet te voorkomen.
* **Max Simultaneous Tracked Images:** `20`. Hierdoor blijven meerdere posters gelijktijdig in het geheugen van de camera hangen.
* **Track Device Pose:** Aangevinkt. Dit activeert *Extended Tracking* (via LiDAR of SLAM). Modellen blijven muurvast in de ruimte zweven, zelfs als de poster tijdelijk buiten de cameralens valt.

---

## 4. Scène Architectuur: ICT (`ict.unity`)

De opbouw van de 3D-wereld en de User Interface binnen de scène.

### 4.1 De Camera
De standaard `Main Camera` is verwijderd en vervangen door `Vuforia Engine > AR Camera`. Bevat de `VuforiaBehaviour` component die de hardware-lens en de tracking-databases aanstuurt.

### 4.2 Het UI Canvas
Het Canvas (gemaakt via `UI > Canvas`) schaalt dynamisch mee met elk schermformaat. De **Canvas Scaler Component** is ingesteld met `UI Scale Mode` op `Scale With Screen Size`, Reference Resolution op `1920x1080`, en Screen Match Mode op `Match Width Or Height` (slider op `0.5`).

Binnen dit Canvas staan de volgende componenten, gestructureerd van achtergrond naar voorgrond:

#### _ARFullscreenManager (Script Container)
Een leeg GameObject dat het script `ARFullscreenManager.cs` draagt. Dit is een Singleton (`Instance = this;`) die bij `Awake()` via `FindFirstObjectByType<Canvas>()` automatisch de onderliggende video- en blurschermen detecteert. Beheert de weergave van fullscreen video's en de logica van de `WebViewObject` in-app browser.

#### BlurBackgroundUI (Frosted Glass Effect)
Een `Raw Image` die het hele scherm vult. Bevat een custom materiaal met de `UI/Simple Blur` shader (Render Queue 3000). Als een video fullscreen gaat, kopieert de Manager de RenderTexture naar dit vlak. Zorgt voor een zware visuele blur zonder rekenkrachtverlies. `Raycast Target` staat uitgevinkt.

#### FullscreenUI (De Videospeler)
Een `Raw Image` bovenop de blur, eveneens fullscreen. Bevat de **Aspect Ratio Fitter** component, ingesteld op `Fit In Parent`. Dit garandeert dat 16:9 video's op een 4:3 iPad niet vervormen, maar nette zwarte balken krijgen.

#### LoginPanel (Beveiligde Exit)
Een donker, semi-transparant `Panel` om onbedoeld afsluiten te voorkomen. Het bevat een TerugKnop (die het panel activeert), een `TMP_InputField` met `Content Type` ingesteld op `Pin` of `Password`, en een Bevestig Button. Deze knop is gekoppeld aan het `MenuManager` script en laadt het hoofdmenu in bij de juiste pincode (`1234`).

### 4.3 Image Targets in de Hierarchy
Alle trackingpunten staan rechtstreeks in de root van de scène-hiërarchie en functioneren onafhankelijk van elkaar. Ieder onderwerp (`AI`, `Campus`, `Code`, `Networks`, `PCB`, `Printer`) is een los **Vuforia Image Target**.

Daarnaast is er een specifiek Image Target genaamd **IT Vives**. Dit is geen verzamelmap, maar de unieke marker voor de website. Wanneer deze poster gescand wordt, opent niet een video, maar triggert dit de in-app browser.

Elk video-trackingpunt heeft deze exacte opbouw in de Inspector:
* **Type:** `From Database` (bijv. de OpenDeurDag database met de juiste foto-selectie).
* **Event Handler:** De standaard `DefaultObserverEventHandler` is **verwijderd**.
* **MyPrefabInstantiator.cs:** Toegevoegd aan het target. Dit script instantiëert de 3D-prefab uit de specifieke projectmap pas bij de eerste scan. Bij het wegkijken vernietigt hij het object niet, maar zet hij simpelweg alle Mesh Renderers onzichtbaar (`r.enabled = false`) om zware Garbage Collection spikes en lag te voorkomen.
* **Prefab Link:** De specifieke prefab (bijv. de `PCB` prefab) is gekoppeld in het veld `My Model Prefab`.

---

## 5. De AR Objecten (Prefabs) & Componenten

Wanneer een Image Target herkent wordt, wordt de bijbehorende Prefab ingeladen. Een prefab (zoals de zwevende video op de poster) bestaat uit de volgende kernonderdelen:

### 5.1 Het 3D Object (Plane / Quad) en Materiaal
Dit is het fysieke vlak in de 3D-ruimte waarop de video wordt geprojecteerd. De Mesh Renderer van dit object bevat het unieke materiaal uit de Materials-map. Binnen de instellingen van dit materiaal is de Render Texture (bijv. `RT_PCB`) uit de lokale map van het target gekoppeld aan het Albedo-kanaal.

### 5.2 ARVideoFullscreen.cs
Dit op maat gemaakte script zit op het 3D Plane-object en is de brug tussen de 3D-ruimte en de 2D UI. Het script controleert continu op touch-inputs (`Pointer.current.press.wasPressedThisFrame`) via Raycasting. Tikt de bezoeker het videovlak in AR aan? Dan roept het script `EnterFullscreen()` aan, geeft het de unieke Render Texture door aan het Canvas, en maximaliseert het de weergave.

### 5.3 Video Player Component
Zit gekoppeld op een child-object binnen de prefab.
* **Source & Clip:** Speelt de specifieke `.mp4` af die lokaal is toegewezen vanuit de map van het Image Target.
* **Target Texture:** De uitvoer wordt gerenderd naar de lokale Render Texture.
* **Play On Awake:** Strikte regel: dit vinkje staat **UIT**.
* **Integratie met script:** Het `ARVideoFullscreen.cs` script dwingt een harde `Prepare()` af tijdens het laden. Dit laadt het eerste frame in het geheugen, maar stopt direct afspelen via `Stop()` en dempt het geluid. Pas als het object fullscreen wordt geopend via touch, vuurt de code `myVideoPlayer.time = 0;` en `myVideoPlayer.Play()` af.

### 5.4 In-App Browser (ARBrowserTarget.cs)
Dit script is specifiek ontworpen voor targets zoals **IT Vives** of andere interactieve knoppen die een website openen (zoals inschrijfpagina's). Het roept de `EnterBrowser(string url)` functie aan in de Manager, instantieert een native `WebViewObject` van het mobiele besturingssysteem, en injecteert marges rondom het scherm om een "klik buiten om te sluiten" functionaliteit te creëren.

---

## 6. Ontwikkelaarshandleiding: Nieuwe Content Toevoegen

Om de applicatie uit te breiden met nieuwe interactieve posters, wordt een strikte copy-paste workflow gehanteerd. Er is geen nieuw programmeerwerk nodig. 

1. **Mappenstructuur en Bestanden:** Maak in `Assets > Image Targets` een nieuwe map aan met de naam van het onderwerp (bijv. `NieuwOnderwerp`). Importeer in deze map de poster-afbeelding en het `.mp4` videobestand. Selecteer de afbeelding en wijzig de Texture Type in de Inspector direct naar `Sprite (2D and UI)`.
2. **Render Texture:** Klik met de rechtermuisknop in deze nieuwe map en kies `Create > Render Texture`. Geef het een logische naam en stel de afmeting (Size) in de Inspector in op 1920x1080.
3. **Materiaal:** Navigeer naar `Assets > Materials`. Dupliceer hier een bestaand videomateriaal (`Ctrl+D` of `Cmd+D`) en hernoem dit. Sleep vervolgens de nieuw gemaakte Render Texture in het Albedo-kanaal van dit materiaal.
4. **Prefab Assembleren:** Dupliceer een bestaande video-prefab in het project, hernoem deze en verplaats hem naar je nieuwe map in `Image Targets`. Open de prefab en sleep het nieuwe materiaal op de Mesh Renderer van het Plane-object. Koppel de Render Texture aan het open slot van het `ARVideoFullscreen` script en aan de Video Player component. Sleep tot slot je lokale `.mp4` bestand in de Video Clip gleuf van de Video Player.
5. **Vuforia Integratie in de Scène:** Upload de afbeelding naar de Vuforia Database via het webportaal en update de database binnen Unity. Kopieer in de `ict` scène een bestaand Image Target. Verander in de Inspector de Database-afbeelding naar de nieuwe poster. De `Default Observer Event Handler` is hier al correct verwijderd. Sleep als laatste stap jouw nieuw gemaakte prefab in het veld `My Model Prefab` van het `My Prefab Instantiator` script.

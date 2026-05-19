# Technische Documentatie: Android Deployment

Deze handleiding beschrijft de stappen om het project **InteractiveWall** succesvol te compileren naar een Android-installatiebestand (`.apk`) en dit te installeren op de tablets voor de opendeurdag.

---

## 1. Platform Instellen naar Android

Voordat we de applicatie kunnen bouwen, moet Unity de assets en scripts omzetten naar de Android-architectuur.

1. Ga in het topmenu van Unity naar `File > Build Profiles`.
2. Selecteer aan de linkerkant onder **Platform** de optie **Android**.
3. Zorg ervoor dat de lijst **Scene List** exact de volgende scènes bevat en dat ze zijn aangevinkt in deze volgorde:
   * `hoofdmenu` (Index 0)
   * `ict` (Index 1)
   * `verpleegkunde` (Index 2)
4. Klik rechtsonder op de knop **Switch Platform**. Unity converteert nu de shaders, sprites en databases naar mobiele compressie.

---

## 2. Project & Player Settings

Klik linksonder in het Build Profiles venster op **Player Settings...** om de core instellingen van het installatiebestand te controleren. Navigeer naar het tabblad **Player > Other Settings**.

### 2.1 Graphics API & Rendering
Onder het kopje **Graphics API** maken we gebruik van de stabiele standaardinstelling voor Unity 6:
* **Vulkan** staat bovenaan de lijst als primaire API.
* **OpenGLES3** staat eronder ingesteld als fallback.
* Zorg dat **Multithreaded Rendering** en **Static Batching** zijn aangevinkt om de prestaties van de AR-camera en de 3D-modellen op de processor te maximimaliseren.

### 2.2 Identificatie & Applicatie-instellingen
Scroll naar beneden naar de secties **Identification** en **Configuration**:
* **Override Default Package Name:** Dit staat aangevinkt zodat de app een unieke naam krijgt op het apparaat (bijv. `com.vives.interactivewall`).
* **Install Location:** Staat geconfigureerd op `Prefer External`.
* **Application Entry Point:** Staat ingesteld op `GameActivity`, wat de standaard is voor Unity 6 applicaties op Android.

---

## 3. Het Bouwen van de APK (Build Process)

Nu de configuratie volledig overeenkomt met de projectstandaarden, kan de APK worden gegenereerd.

1. Sluit het Player Settings venster en zorg dat je terug in het **Build Profiles** scherm bent.
2. Klik rechtsonder op de knop **Build**.
3. Er opent een Windows verkenner-venster. Kies een logische map buiten je project directory om de builds in op te slaan.
4. Geef het bestand een duidelijke naam, bijvoorbeeld: `InteractiveWall_Android.apk`.
5. Klik op **Opslaan**. Unity compileert nu alle scènes, materialen en de Vuforia Engine tot één installatiebestand.

---

## 4. Installatie op het Android-apparaat

Volg deze stappen om de gemaakte APK draadloos of via kabel op de tablet te zetten en te installeren:

### Stap 4.1: Het bestand overzetten
* **Via USB-kabel:** Sluit de tablet aan op de pc. Zet de USB-instelling op de tablet via het notificatiescherm op "Bestandsoverdracht (MTP)". Kopieer de APK van je computer en plak deze in de map `Downloads` op de tablet.
* **Via Netwerk/Cloud:** Upload de APK naar Google Drive, OneDrive of stuur het bestand via Discord naar jezelf. Open de bijbehorende app op de tablet en download het bestand lokaal.

### Stap 4.2: Installeren en Uitvoeren
1. Open op de Android-tablet de app **Mijn Bestanden** of **Files**.
2. Navigeer naar de map **Downloads** en tik op het bestand `InteractiveWall_Android.apk`.
3. **Beveiligingsmelding:** Als de tablet vraagt om toestemming om te installeren uit onbekende bronnen:
   * Tik op **Instellingen** in de pop-up.
   * Zet de schakelaar bij *"Toestaan van deze bron"* **AAN** en ga één scherm terug.
4. Tik nogmaals op de APK en kies **Installeren**.
5. Zorg er bij de allereerste opstart voor dat je de pop-up voor **Camera-toestemming** accepteert (*"Tijdens gebruik van de app"*). Dit is verplicht, anders blijft de AR-camera zwart en kunnen de Image Targets niet worden gescand.

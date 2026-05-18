## Nieuwe scene opzetten

Hieronder vind je een korte uitleg hoe je een nieuwe scène zoals die van verpleegkunde kan opzetten.

### Stap 1: Unity Voorbereiden

Voordat we kunnen scannen, moeten we de AR-camera en de Vuforia-engine installeren.

1. Ga bovenin naar `Window > Package Manager`.
2. Zorg dat de dropdown linksboven op `Packages: Unity Registry` staat.
3. Zoek in de lijst naar `Vuforia Engine`.
4. Klik op de `Install` knop rechtsonder.
Unity installeert nu alles wat je nodig hebt voor AR.

### Stap 2: De scène opzetten 

De standaard "Main Camera" van je hoofdmenu werkt niet voor AR. Een AR-camera moet namelijk door de camera van je iPad/tablet kunnen kijken.

1. Maak een nieuwe scène `File > New Scene`.
2. Verwijder de `Main Camera` uit de Hierarchy.
3. Rechtsklik in de Hierarchy en kies: `Vuforia Engine > AR Camera`.
Kijk in de Inspector van deze camera. Als het goed is, zie je een component 'Vuforia Behaviour'.

### Stap 3: De image targets aanmaken (de afbeeldingen die je scant)

Je wilt een deel van het lichaam scannen. Hiervoor gebruiken we een `Image Target`. Dit is een afbeelding dat Unity herkent via de camera. Zodra Unity deze afbeelding ziet, verschijnt de informatie.

Voor deze stap gebruiken we een standaard image target van Vuforia zelf, zodat je niet direct zelf afbeeldingen hoeft te uploaden.

1. Rechtsklik in de Hierarchy en kies: `Vuforia Engine > Image Target`.
2. Selecteer de `Image Target` in de Hierarchy.
3. Kijk in de Inspector bij de component `Image Target Behaviour`.
4. Zet de `Database` op `VuforiaMars_Images`.
5. Zet de `Image Target` op `Astronaut` (bijvoorbeeld).
Je ziet nu een afbeelding van een astronaut in je Scene View. Dit wordt je scan-punt.

### Stap 4: De content koppelen (het orgaan en de uitleg)

Nu gaan we vertellen wat er moet gebeuren als de camera de astronaut ziet. Alles wat je onder het `Image Target` hangt in de Hierarchy, zal verschijnen zodra het plaatje herkend wordt.

**A. Het orgaan (3D-model of Icoon):**

Sleep een 3D-model van een orgaan (of gewoon een 2D-plaatje/icoon) op het `Image Target` object in de Hierarchy.
Pas de grootte en positie aan zodat het mooi op het astronaut-plaatje staat.

**B. De uitleg (de tekst):**
Omdat we in een 3D-scène zitten, gebruiken we TextMeshPro voor de tekst.

1. Rechtsklik op je orgaan-object > `UI > Text - TextMeshPro`.
2. Klik op `Import TMP Essentials` als daarom gevraagd wordt.
3. Pas in de Rect Transform de instellingen aan:
Pos Y Zet deze wat hoger (bijv. 2) zodat de tekst boven het orgaan zweeft.
Width: bijv. 300, height: bijv. 100.
Scale: Zet deze op bijv. 0.01 (tekst in 3D-ruimte moet heel klein geschaald worden).
4. Typ je uitleg, maak de tekst goed leesbaar.

### Stap 5: Testen en de Volgende Stap

Je hebt nu je eerste basis-AR-ervaring gemaakt.

**Om te testen:**

1. Druk op de Play-knop in Unity.
2. Houd een plaatje van de Vuforia-astronaut (je kunt hem even op je telefoon laten zien) voor de webcam van je laptop.
3. Zodra Unity het plaatje ziet, verschijnen je orgaan en je uitleg!

### Wat is de volgende logische stap?

Je hebt nu een test afbeelding, de volgende stap is om dit te vervangen door een echt lichaamsdeel.
Hiervoor heb je je eigen database nodig.

Hier is de stap-voor-stap handleiding om dit voor elkaar te krijgen:

### 1. Database aanmaken in de Vuforia Portal

Ga naar de [Vuforia Developer Portal](https://developer.vuforia.com/) en log in.
Klik op Target Manager in het menu bovenaan.
Klik op Add Database.
Geef de database een naam.
Kies voor het type Device.

Open je nieuwe database en klik op Add Target.
Upload je afbeelding (JPG of PNG).
Geef de Width op (bijvoorbeeld `1` voor 1 meter in Unity-eenheden).

Zodra je targets zijn geüpload en een rating hebben gekregen (een rating van > 4 is aangeraden), klik je op de knop Download Database.
Selecteer de optie Unity Editor en klik op download. Je krijgt nu een `.unitypackage` bestand.

### 2. Database importeren in Unity

Nu je het bestand hebt, moet je het toevoegen aan je Unity-project.

Open je Unity-project.
Importeer het pakket: sleep het gedownloade `.unitypackage` bestand simpelweg in je Project Window of ga naar `Assets > Import Package > Custom Package...`.
Zorg dat in het pop-up venster alle bestanden zijn aangevinkt en klik op Import.

### 3. De database activeren

Nadat de database is geïmporteerd, moet je Unity vertellen dat hij deze moet gebruiken.

1. Configuratie in de Inspector: Selecteer het nieuwe Image Target-object.
Kies bij Type voor `From Database`.
Selecteer bij Database de naam van de database die je net hebt geïmporteerd.
Kies bij Image Target de specifieke afbeelding die je wilt gebruiken.

2. Licentie check: Vergeet niet je App License Key (te vinden onder License Manager in de Portal) in te vullen bij de `Vuforia Configuration` (te vinden via `Window > Vuforia Configuration`).



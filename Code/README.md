## Code

In deze map kan je enkele builds en het uiteindelijke Unity project terugvinden. Verder vind je hier ook zaken zoals de architectuur van de code en enkele functionaliteiten.

## Project Architectuur

### 1. Belangrijkste Packages
* Vuforia Engine: Gebruikt voor Image Target herkenning en AR-tracking.
* TextMeshPro: Voor scherpe, schaalbare UI-teksten in het hoofdmenu en de pop-ups.
* Unity UI: Voor het grid-systeem en het beveiligde inlogpaneel.

### 2. Mappenstructuur
* Assets/Scenes/: Bevat de verschillende omgevingen (hoofdmenu, ICT_scene, kleuter_scene, zorg_scene).
* Assets/Scripts/: Bevat de logica voor de `MenuManager` en de `ARVideoManager`.
* Assets/Sprites/: Bevat de iconen voor de interface (ingesteld als Sprite 2D and UI).
* Assets/StreamingAssets/: Bevat de videobestanden die door Vuforia worden aangeroepen.

## Functionaliteiten

### Hoofdmenu & Navigatie
De app start in een centraal hub-menu. Gebruikers kunnen schakelen tussen verschillende richtingen:
* ICT: Focus op interactieve muren en techniek.
* Kleuteronderwijs: Educatieve AR-toepassingen voor jonge kinderen.
* Verpleegkunde: Medische simulaties en procedurele ondersteuning.

### Beveiliging (Pincode)
Toegang tot de specifieke richtingen is beveiligd met een toegangscode-systeem. Dit voorkomt dat onbevoegden per ongeluk in de verkeerde leeromgeving terechtkomen. De codes kunnen worden geconfigureerd in de `MenuManager` component in de Inspector.

## Gebruikinstructies

1. Start: Open de scène `hoofdmenu` en druk op Play (of start de build op de tablet).
2. Selectie: Klik op een van de drie service-blokken.
3. Authenticatie: Voer de pincode in die bij de betreffende richting hoort.
4. AR-Interactie: Richt de camera op een geregistreerd Image Target om de bijbehorende video of content te starten.
5. Terugkeren: Gebruik de 'Home'-knop in de AR-scène om terug te keren naar het hoofdmenu.

## Probleemoplossing (Troubleshooting)

* Video start niet: Controleer of de video in de `StreamingAssets` map staat en of de naam exact overeenkomt in de `ARVideoManager`.
* Afbeelding wordt niet herkend: Zorg voor voldoende licht en controleer de "Tracking Rating" in de Vuforia Developer Portal.
* Input Field werkt niet: Controleer of de `EventSystem` aanwezig is in de scène-hierarchy.
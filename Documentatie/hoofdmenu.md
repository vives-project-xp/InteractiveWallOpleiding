## Documentatie: Hoofdmenu 

Deze documentatie beschrijft de stappen voor het opzetten van een interactief hoofdmenu in Unity, inclusief navigatie, een raster-layout voor diensten en een beveiligde toegang met pincode.

### De scene opzetten
Start met het maken van een nieuwe scene.<br>
Ga naar `File > New Scene` en kies een Basic of UI template.<br>
Sla de scène op in de **Assets** folder onder de naam `hoofdmenu`.

### Canvas configuratie
Elke UI-scène heeft een Canvas nodig om elementen weer te geven.<br>
Rechtsklik in de Hierarchy en kies `UI > Canvas`.
Selecteer het Canvas en zoek de **Canvas Scaler** component in de Inspector.<br>
Zet de **UI Scale Mode** op `Scale With Screen Size`. Dit zorgt ervoor dat de UI er op zowel iPads als monitors goed uitziet.

### Achtergrond
Rechtsklik op het Canvas en kies `UI > Image`. Noem deze `achtergrond`.<br>
Klik in de **Rect Transform** op het Anchor-vierkant en kies `stretch-stretch` (houd `Alt` ingedrukt).<br>
Verander de **Color** in de Inspector naar een rustige, neutrale kleur (bijv. lichtgrijs).

### Header (titelbalk)
De header fungeert als de visuele titel van je applicatie.<br>
Rechtsklik op het Canvas en kies `UI > Image`. Noem deze `naam-app`.<br>
Gebruik de `top-stretch` anchor (met `Alt`) en zet de height op `150`.<br>
Voeg een `UI > Text - TextMeshPro` toe als "child" van de header.<br>
Gebruik de alignment opties om de tekst "Interactive Scenes" exact in het midden te centreren.

### Service grid (menu-knoppen)
Om de verschillende richtingen (Elektronica-ICT, kleuteronderwijs en verpleegkunde) netjes te presenteren, gebruiken we een automatisch raster.<br>
Maak een leeg object aan onder het Canvas (`Create Empty`) en noem dit `Grid`.<br>
Voeg de component `Grid Layout Group` toe met de volgende instellingen:
* Cell Size: 400 x 400
* Spacing: 50 x 50
* Constraint: Fixed Column Count (waarde: 3)

Voeg drie Buttons toe (`UI > Button - TextMeshPro`) aan dit Grid.<br>
Iconen: Sleep je gewenste `.png` (ingesteld als Sprite 2D and UI) in het vakje Source Image van elke button.

### Toegangscode systeem (loginpaneel)
Voor de beveiliging maken we een paneel dat om een code vraagt voordat een scène laadt.<br>
Panel: Maak een `UI > Panel` aan onder het Canvas. Noem dit `LoginPanel`.<br>
Input: Voeg een `UI > TextMeshPro - Input Field` toe binnen het paneel. Zet de **Content Type** op `Password` of `Pin`.<br>
Bevestigingsknop: Voeg een button toe met de tekst "Bevestig".<br>
Volgorde: Sleep het `LoginPanel` naar de onderkant van de Hierarchy binnen het Canvas zodat het bovenop alle andere elementen verschijnt.

### MenuManager scripting
Dit script beheert de logica van de knoppen en de code-check.<br>
Maak een script `MenuManager.cs`.<br>
Gebruik `SceneManager.LoadScene` voor de navigatie.<br>
Maak een functie `BevestigCode()` die de tekst uit het `InputField` vergelijkt met je wachtwoord (bijv. "1111").<br>
Koppel het script aan een leeg object `_MenuManager` in de scène en sleep de benodigde UI-elementen in de slots in de Inspector.

### Scenes in build
Zorg dat Unity alle schermen herkent:<br>
Ga naar `File > Build Profiles` (of `Build Settings`).<br>
Sleep al je scènes (Hoofdmenu, ICT, Kleuter, etc.) in de lijst **Scenes in Build**.<br>
Zorg dat `hoofdmenu` op **Index 0** staat.
## Code

In deze map staat de Unity-export van het project, samen met de bijhorende buildbestanden en de documentatie die je nodig hebt om de app te begrijpen of opnieuw te gebruiken.

## Wat je hier terugvindt

- De Unity-build onder `demo-2-build/Demo 2`.
- De AR- en UI-flow van de app, met het hoofdmenu als startpunt.
- Ondersteunende bestanden voor iOS, Android en Unity/IL2CPP-exports.

## Belangrijkste onderdelen

### Packages en technologie

- Vuforia Engine: image target herkenning en AR-tracking.
- TextMeshPro: scherpere UI-teksten in het hoofdmenu en inlogschermen.
- Unity UI: canvas, buttons, input fields en menu-opbouw.

### Logische flow

- `hoofdmenu` is het centrale startpunt.
- De knoppen leiden naar ICT, Kleuter en Verpleegkunde.
- `MenuManager` beheert de navigatie en de codecontrole.

### Praktische opbouw

- De menu-scene gebruikt een gridlayout voor de diensten.
- AR-content wordt opgestart via image targets en de bijhorende media.

## Gebruik

1. Open de Unity-export in `demo-2-build/Demo 2`.
2. Start de scène `hoofdmenu`.
3. Kies een richting.
4. Scan een image target om de content te activeren.
5. Gebruik de homeknop in de AR-scène om terug te keren naar het hoofdmenu.

## Problemen die vaak terugkomen

- Als een video niet start, controleer dan of de asset in `StreamingAssets` staat en of de naam exact overeenkomt met de code.
- Als een image target niet herkend wordt, controleer lichtinval, afstand en de Vuforia-configuratie.
- Als invoervelden niet reageren, controleer of `EventSystem` en de UI-componenten correct aan de scene gekoppeld zijn.

## Verwijzing

- Start hier voor de Unity-configuratie: [Documentatie](../Documentatie/README.md)
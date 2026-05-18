(# Motor-systeem - Interactive Wall)

Dit document beschrijft de fysieke en elektrische onderdelen en bouwstappen voor het stepper-motor aangedreven systeem. Gebruik [README.md](README.md) in deze map als referentie voor stijl en structuur.

---

## 1. Benodigde materialen en componenten

Vul hieronder alle onderdelen in die je nodig hebt, met links naar de producten.

### Materialen voor de constructie

| Materiaal | Hoeveelheid | Prijs |
| :--- | :---: | ---: |
|  |  |  |

### Elektrische en mechanische componenten

| Component | Hoeveelheid | Prijs | Notities |
| :--- | :---: | ---: | --- |
| Stepper motor (type) |  |  | Bijvoorbeeld NEMA17/NEMA23 |
| Motor driver (type) |  |  | Bijvoorbeeld DRV8825, TMC2209 |
| Voedingsadapter |  |  | Voltage/ampère specificatie |
| Microcontroller / controller board |  |  | Bijvoorbeeld Arduino, ESP32, CNC board |
| Eindschakelaars |  |  | Voor homing/veiligheid |
| Tandriemen / pulleys / as |  |  | Indien gebruik van riemaandrijving |
| Houten onderdelen / MDF |  |  | Specificaties per onderdeel |
| Schroeven, moeren, bevestigingen |  |  | Diverse maten |

---

## 2. Elektrisch schema

Voeg hier het elektrische schema in als afbeelding of ASCII-tekening. Voorbeeld (plaatsvervanger):

![Elektrisch schema](./foto/elektrisch_schema.png)

Of een eenvoudige ASCII-voorbeeld:

```
Voeding (+V) -----> Motor driver -----+----> GND
																		 |
													Microcontroller (step/dir/enable)
																		 |
											Eindschakelaars ---> GND
```

Opmerkingen:
- Noteer hier de exacte pin-aansluitingen van de microcontroller.
- Vermeld spannings- en stroomwaardes van de voeding.

---

## 3. Lasercutter- en 3D-printerbestanden

Beschrijf hier alle bestanden die nodig zijn voor productie (STL, DXF, SVG, etc.).

### Beschikbare bestanden

- **Motor_mount.dxf**: Montageplaat voor motor
	- Materiaal: MDF / 6mm
	- Afmetingen: 
	- Hoeveelheid: 1

- **Pulley_holder.dxf**: Houder voor pulley
	- Materiaal: MDF / 6mm
	- Hoeveelheid: 2

- **Stepper_bracket.stl**: 3D-print voor bevestiging motor
	- Materiaal: PLA/PETG
	- Hoeveelheid: 1

### Download & details

Alle bestanden bevinden zich in de map: [CAD-bestanden/Motor-systeem](CAD-bestanden/Motor-systeem/)

---

## 4. Stap-voor-stap bouwinstructies

Volg deze stappen om het motor-systeem te bouwen en te testen.

### Stap 1: Voorbereiding

- Controleer of alle onderdelen aanwezig zijn (zie sectie 1).
- Print of laser-cut alle benodigde onderdelen.
- Monteer losse mechanische onderdelen losjes zodat je later kunt afstellen.

### Stap 2: Mechanische montage

- Monteer de motor op de `Motor_mount` plaat en bevestig deze aan het frame.
- Monteer pulleys/riemen of direct-coupling zoals gepland.
- Zorg dat geleiders vrij lopen en geen binding hebben.

### Stap 3: Elektrische aansluiting

- Sluit stepper motor aan op driver (let op draadvolgorde).
- Verbind driver met microcontroller (step, dir, enable pins).
- Sluit voeding aan op driver en microcontroller (verifieer polariteit).
- Verbind eindschakelaars met microcontroller (gebruik pull-ups indien nodig).

### Stap 4: Configuratie en testen

- Stel microstepping en huidige limiet in op de motor driver.
- Laad testfirmware en configureer stappen/mm, max snelheid en acceleratie.
- Test homing met eindschakelaars en verfijn instellingen.
- Voer belastings- en looptests uit om te controleren op oververhitting of stapverlies.

### Stap 5: Finalisatie

- Zet alle bevestigingen vast met borgmiddel indien nodig.
- Scherm elektrische verbindingen af en label kabels.
- Maak een korte gebruikershandleiding voor veiligheid en onderhoud.

---

## 5. Resultaat

Beschrijf hier wat het verwachte resultaat is en voeg foto's toe.

Voorbeeld:

![Resultaat motor systeem](./foto/motor_resultaat.jpg)

- Het systeem beweegt de rails soepel met ingestelde stappen/mm.
- Homing werkt betrouwbaar met eindschakelaars.

---

## Bijlagen

- Link naar elektrische schema-bestanden: `elektrisch_schema.kicad_sch` (indien aanwezig)
- Link naar CAD-bestanden: `CAD-bestanden/Motor-systeem/`
- Extra resources: links naar datasheets en referenties


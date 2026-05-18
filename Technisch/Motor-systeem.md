# Motor-systeem - Interactive Wall

Dit document beschrijft de fysieke en elektrische onderdelen en bouwstappen voor het stepper-motor aangedreven systeem. Gebruik [README.md](README.md) in deze map als referentie voor stijl en structuur.

---

## 1. Benodigde materialen en componenten

Hieronder staan de benodigde onderdelen voor de uitbreiding met de elektrische werking van de ipad.

### Elektrische en mechanische componenten

| Component | Hoeveelheid | Prijs |.
| :--- | :---: | ---: | --- |
| [Stepper motor](https://www.123-3d.nl/123-3D-NEMA17-stappenmotor-1-8-graden-per-stap-40-mm-lang-4-08-kg-cm-SL42S240A105-0524-i3421.html) | 1 | €13,50 |
| [Motor driver]([type](https://www.123-3d.nl/123-3D-Stepstick-DRV8825-stappenmotordriver-i96.html)) | 1 | €6,35 |
| [Voedingsadapter](https://www.allekabels.be/ac-dc-adapter/7207/1307581/acdc-adapter.html?mc=nl-be&gad_source=1&gad_campaignid=23389431341&gbraid=0AAAAAC3CB_okD0SKQMrVZA9-wxPausReL&gclid=CjwKCAjw8arQBhB9EiwAfIKdQppb90uKU8NKwPuhPW7Y_S4RznlXHUI-3nngYTxAewUgIViytcgq5BoC9CUQAvD_BwE) | 1 | €12,59 | 
| [arduino](https://www.123-3d.nl/123-3D-Arduino-Uno-Rev-3-clone-Arduino-compatible-i2286.html?utm_source=google&utm_medium=cpc&utm_campaign=PPC-SEA-NL-Google-Shopping-B-All-Segments-Parts-Electronics-CPA-02-00&gad_source=1&gad_campaignid=18925618742&gbraid=0AAAAAC164-QDrF7GzeNrhVDqncWMJ9kvG&gclid=Cj0KCQiA8KTNBhD_ARIsAOvp6DIiChWMlNo7wQswlYsGXGtb5-Uf0_ESEoJvM13B0mFs2YvTm7KTuc8aAugtEALw_wcB) | 1 | €16,00 |
| [Stekkerblok](https://www.allekabels.be/stekkerdoos/7069/4387750/stekkerdoos-penaarde.html?mc=nl-be&gad_source=1&gad_campaignid=23384480523&gbraid=0AAAAAC3CB_qtY4OpM5_-fprDxz_QA0sEq&gclid=CjwKCAjw8arQBhB9EiwAfIKdQuOT8Zny5DlwZA6k9oBzUDrMvzsZFRJcDZzGcQ7nEkw-VssDObl66hoCwPIQAvD_BwE) | 1 | €5,89 | 
| [USB-A](https://www.allekabels.be/stekkerdoos/7069/4387750/stekkerdoos-penaarde.html?mc=nl-be&gad_source=1&gad_campaignid=23384480523&gbraid=0AAAAAC3CB_qtY4OpM5_-fprDxz_QA0sEq&gclid=CjwKCAjw8arQBhB9EiwAfIKdQuOT8Zny5DlwZA6k9oBzUDrMvzsZFRJcDZzGcQ7nEkw-VssDObl66hoCwPIQAvD_BwE) | 1 | €8,59 |
| [as staaf set](https://be.vicedeal.com/products/as-staaf-set-t8-dual-lood-schroef-koppeling-lagers-ondersteuning-blok-kp08-scs8uu-cnc-deel-200-250-300-350-400-500mm-optische-as-1?gad_source=1&gad_campaignid=21267983978&gbraid=0AAAAA9WryfGzXXNNLLOqgyA4Q5ZerETsF&gclid=Cj0KCQiA8KTNBhD_ARIsAOvp6DLnkivRH18-CMoxPJWv9OJEdhqVvrrPXx8cTLfV__MeeH1a3XV9CywaAvMtEALw_wcB&variant=UHJvZHVjdFZhcmlhbnQ6ODMzMjA0NDQ3) | 1 | €59,39 | 
| [M5x20mm moer](https://www.rvspaleis.nl/bouten/binnenzeskant/ws-9335/ws-9335-[-]-a2-[-]-m5/9335-2-5x20_1?gad_source=1&gad_campaignid=22359118057&gbraid=0AAAAA-qqD0rRsCiAMIkC0rO-J42JnhjZ6&gclid=CjwKCAjw8arQBhB9EiwAfIKdQutTbv1kBjIYRPDGqiRJO7b9_LHKvkk9x-FkWhNVoBGSRA-U17GzuxoCg0UQAvD_BwE) | 14 | €0,25 |
| [M4x20mm](https://www.meubelbeslagxxl.nl/meubelgreep-schroef-m4x20mm-verzinkt-per-stuk?utm_source=google&utm_medium=cpc&utm_campaign=22488980808&campagnenaam=BE_SmartShopping_BER1.5-1.99&gad_source=1&gad_campaignid=22488981732&gbraid=0AAAAAqpB4ZGGFfGhuHOAYZdupbfWbsrbg&gclid=CjwKCAjw8arQBhB9EiwAfIKdQialVvts3u61pWQ70tkz4qwQE4XleLrCiEm0ewB63gqeQMiOWCppXRoC_FYQAvD_BwE)| 12 | €0,07 |
| [M3x10mm](https://www.rvspaleis.nl/bouten/buitenzeskant/din-933/din-933-[-]-a2/din-933-[-]-a2-[-]-m3/933-2-3x10_1?gad_source=1&gad_campaignid=22138139970&gbraid=0AAAAA-qqD0qdITVrx2k6MS822IN53Q2Lz&gclid=CjwKCAjw8arQBhB9EiwAfIKdQob09FlFBnQwPjgGvd8XTTRQznzboX6O4Wm2nhdu_zxfV5Bt4Rqe-RoCO5EQAvD_BwE) | 4 | €0,21 |

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

- lasercut bestanden
	- 2 veranderingen, de top veranderd en de achterkant veranderd
- 3D bestanden
	- Beugel voor stepper motor
	- Stang motor tussenstuk voor staaf in te steken

### Beschikbare bestanden

- **box_Drawing_motor Sheet1.dxf**: Volledige box met motor
	- Materiaal: MDF / 6mm
	- Afmetingen: 
	- Hoeveelheid: 1

- **Corner.stl**: Hoeken 
	- Materiaal: PLA
	- Hoeveelheid: 8

- **stang_motor_tussenstuk.stl**: Montage stuk stang 
	- Materiaal: PLA
	- Hoeveelheid: 1

- **beugel_stappenmotor.stl**: Beugel 
	- Materiaal: PLA
	- Hoeveelheid: 1
### Download & details

Alle bestanden bevinden zich in de map: [CAD-bestanden/Motor-systeem](CAD-bestanden/Motor-systeem/)

---

## 4. Stap-voor-stap bouwinstructies

Volg deze stappen om het motor-systeem te bouwen en te testen.

### Stap 1: Voorbereiding

- Controleer of alle onderdelen aanwezig zijn (zie sectie 1).
- Print of laser-cut alle benodigde onderdelen.

### Stap 2: Mechanische montage

- Monteer de as staaf set op de middenplaat met De 5Mx20mm moeren.
- Monteer op de middelste blok van de as set staaf de houder om de blok omhoog en omlaag te laten gaan met de 3Mx10mm moeren.
- Monteer op de blok in het midden en de buitenste 2 de **stang_motor_tussenstuk** met de 4Mx20mm
- Monteer op de steppermotor de **beugel_stappenmotor** via de 5Mx20mm moeren. 


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


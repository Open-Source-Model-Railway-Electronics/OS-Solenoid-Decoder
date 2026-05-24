> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; 🇳🇱 NL &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Inleiding

De OS-Solenoid-Decoder is een eenvoudige, krachtige DCC-accessoire­decoder voor het schakelen van:

- Wissels (wisselaandrijvingen)
- Relais
- Ontkoppelaars
- Elk ander magneet­aangedreven apparaat

Hij kan lasten tot 5 A aan en ondersteunt vrijwel elk type wisselaandrijving.
Hij kan ook worden gebruikt in combinatie met OS-relais voor hartpunt­polarisering van zowel electrofrog- als unifrog-wissels.

Deze decoder is ontworpen om:

- **Gemakkelijk te bedraden** te zijn — insteekbare schroef­klemmen maken voorbedrading eenvoudig en staan snelle verwijdering of vervanging toe
- **Gemakkelijk te configureren** — gebruikt alleen standaard DCC-accessoire­commando's; geen computer, geen CV, geen POM
- **Modulair** — optionele relais- en transistor­uitbreidings­kaarten
- **Robuust** — ingebouwde overbelastings­beveiliging

Of u nu een grote baan bouwt of gewoon iets wil dat probleemloos werkt: deze decoder is gemaakt om het werk te doen.

---

## Inhoudsopgave

- [Kenmerken](#-kenmerken)
- [De decoder aansluiten](#-de-decoder-aansluiten)
- [Voeding](#-voeding)
- [Magneetuitgangen](#-magneetuitgangen)
- [Relaisuitbreiding – Unifrog-polarisering](#-relaisuitbreiding--unifrog-polarisering)
- [Relaisuitbreiding – Electrofrog-polarisering](#-relaisuitbreiding--electrofrog-polarisering)
- [Relaisuitbreiding – Open contact (algemeen gebruik)](#️-relaisuitbreiding--open-contact-algemeen-gebruik)
- [Ontkoppelaars en andere inductieve lasten](#-ontkoppelaars-en-andere-inductieve-lasten)
- [De OS-Solenoid-Decoder configureren](#️-de-os-solenoid-decoder-configureren)
- [LED-gedrag in bedrijfsmodus](#-led-gedrag-in-bedrijfsmodus)
- [Configuratie­modus activeren](#-configuratiemodus-activeren)
- [Voordat u begint](#-voordat-u-begint)
- [Menu­overzicht](#-menuoverzicht)
- [Menu 1: DCC-adres­toewijzing](#-menu-1-dcc-adrestoewijzing)
- [Menu 2: Uitgangs­type­selectie](#-menu-2-uitgangstype­selectie)
- [Menu 3: Puls­tijd­configuratie](#-menu-3-pulstijdconfiguratie)
- [Menu 4: PWM-taak­cyclus](#-menu-4-pwm-taakcyclus)
- [Menu 5: Globale instellingen & voorinstellingen](#-menu-5-globale-instellingen--voorinstellingen)
- [Locomotief­functiebe­sturing uitgelegd](#-locomotieffunctiebe­sturing-uitgelegd)

---

## 🔧 Kenmerken

- **Tot 5 A totale uitgangs­stroom** — drijft zware magneten, relais of wisselaandrijvingen aan zonder externe versterkers
- **Insteekbare schroef­klemmen** — maakt voorbedrading eenvoudig en staat snelle verwijdering of vervanging van de decoder toe
- **Meerdere uitgangs­modi:**
  - Dubbele puls (standaard)
  - Enkele puls
  - Dubbel continu
  - Enkel continu
  - Dubbele puls met Electrofrog-relais
- **Eén uitgang tegelijk** — de decoder schakelt één uitgangs­paar tegelijk om overbelasting te voorkomen
- **Optionele CDU-module­ondersteuning** — vermindert energie­verbruik en verlengt de levensduur van wisselaandrijvingen
- **Overbelastings­detectie en -beveiliging** — uitgangen worden automatisch uitgeschakeld als een overbelasting wordt gedetecteerd
- **Configuratie via DCC-commando's alleen** — geen programmeer­software of -hardware vereist
- **Vooraf gedefinieerde configuratie­voor­instellingen** — schakel alle uitgangen snel over naar puls-, continu- of electrofrog-modus met één DCC-commando
- **Locomotief­functiebe­sturing** (F1–F16) — voor snel schakelen via handregelaars zoals de Roco Lokmaus of Multimaus
- **Roco-adres­offset­ondersteuning** — ingebouwde ondersteuning voor de Roco 4-adres­offset
- **Uitbreidbaar met relais- en transistor­kaarten:**
  - Dubbele relais­module voor electrofrog-wissel­polarisering
  - Enkel zelfhoudend relais voor unifrog-polariteits­schakeling
  - Open-contact relais­modules voor algemeen DCC-relais­besturing
  - Transistor­aandrijfmodule voor twee­draads wisselaandrijvingen

---

## 🔌 De decoder aansluiten

De OS-Solenoid-Decoder heeft een duidelijke en consistente bedradingsindeling. Voeding wordt bovenaan aangesloten, uitgangen zitten aan beide zijden.

---

## 🔋 Voeding

- Sluit DCC-baan­spanning of een DC-voeding (max. 19 V) aan op de decoder.
- Zowel het DCC-signaal als de voedings­draden worden aangesloten aan de bovenzijde van de decoder.
- ⚠️ Gebruik geen AC-spanning — dit beschadigt de decoder.

---

## ⚡ Magneetuitgangen

De decoder biedt 8 dubbele uitgangs­blokken, ontworpen voor klassieke twee­spoels­wisselaandrijvingen.

Elk uitgangs­blok heeft:

- Twee buitenste schroef­klemmen — voor de linker- en rechterspoel (A en B)
- Eén middelste klem — voor de gemeenschappelijke draad (COM), gedeeld tussen de twee spoelen

Deze indeling laat u toe:

- Tot 8 twee­spoels­wisselaandrijvingen aan te sturen (bijv. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Of 3-draads wisselaandrijvingen zoals de MTB MP-1 rechtstreeks aan te sluiten

Uitgangen zijn gegroepeerd in paren met duidelijke A-, COM- en B-markering.

![Magneet­decoder met 8 twee­spoels­wisselaandrijvingen aangesloten](image.png)

Hoewel de decoder niet is ontworpen voor seinbe­sturing, kan hij eenvoudige twee­aspecten­seinen aansturen via dezelfde uitgangen.

![Bedrading van twee­aspecten­sein](image-1.png)

---

## 🔌 Relaisuitbreiding – Unifrog-polarisering

Deze uitbreiding voedt automatisch het hartpunt van unifrog-wissels met behulp van zelfhoudende relais.

- De relais­kaart bestaat uit vier kleine relais­eenheden die kunnen worden losgebroken als u er minder dan vier nodig heeft.

![Zelfhoudende relais­uitbreidings­kaart](image-2.png)

- De relais worden vergrendeld door hetzelfde signaal dat de wisselaandrijving activeert — geen extra configuratie nodig.
- Elke relais­eenheid schakelt de hartpunt­polariteit op basis van de richting van het wissel.

Met één relais per wissel verwerkt deze uitbreiding tot 8 unifrog-hartpunten met twee kaarten.

![Relaisuitbreiding gemonteerd op decoder voor unifrog-bedrading](image-3.png)

- De relais­kaart wordt rechtstreeks in de uitbreidings­header van de decoder gestoken, maar kan ook op afstand nabij het wissel worden gemonteerd.

![Voorbeeld van op afstand gemonteerde relaisuitbreiding](image-4.png)

Deze relais­module is ook compatibel met andere magneet­decoders.

---

## ⚡ Relaisuitbreiding – Electrofrog-polarisering

Electrofrog-wissels vereisen twee relais­schakelingen per wissel:

1. Eén om het hartpunt te ontkoppelen vóór het omzetten van de wisselaandrijving
2. Eén om het opnieuw te verbinden met de juiste polariteit daarna

Deze uitbreiding handelt die volgorde automatisch af. Ze bestaat uit vier dubbele-relais­modules, permanent gekoppeld.

- Ze wordt gestoken aan de linkerzijde van de decoder (gemarkeerd voor electrofrog-gebruik).
- Elk relais­paar is gekoppeld aan één magneet­uitgang: uitgang 1 → relais­paar 1, uitgang 2 → relais­paar 2, enz.
- Deze modules kunnen niet worden gescheiden, omdat ze baan­spanning en interne logica delen.

De decoder heeft een speciale voorinstelling die de electrofrog-schakelsequentie activeert.
Als de hartpunt­polariteit na installatie verkeerd is, keer dan de jumpers op de relais­module om — geen herprogrammering nodig.

---

## ⚙️ Relaisuitbreiding – Open contact (algemeen gebruik)

Voor het schakelen van externe apparaten (verlichting, seinen, logische circuits) via gewone relais­contacten:

- Elke eenheid biedt een omschakelend (NO/NC) relais, bestuurbaar via DCC.
- Tot 16 afzonderlijk adresseerbare relais­contacten bij volledige bestukking.
- De modules worden rechtstreeks in de decoder gestoken of kunnen op afstand worden gebruikt met draden.
- Beschikbaar in een doorvoer­gat DIY-versie en een compacte SMD-versie.

Net als de unifrog-relais­kaarten kunnen deze modules worden losgebroken en hergebruikt met andere DCC-magneet­decoders.

![Algemeen­gebruik­relais­modules gemonteerd op de decoder](image-5.png)

![Detail algemeen­gebruik­relais­module](image-6.png)

De algemeen­gebruik­relais­uitbreiding kan ook electrofrog-wissels polariseren met iets meer bedrading:

- Gebruik de NO (Normally Open) contacten
- Verbind beide COM-contacten met elkaar en sluit ze aan op het hartpunt
- Sluit de NO-contacten aan op de baan­voedings­rails

![Electrofrog-bedrading met algemeen­gebruik­relais­modules](image-7.png)

Als een hartpunt de verkeerde polariteit heeft, verwissel dan de twee baan­voedings­draden (zoals weergegeven voor hartpunt 4 in het bovenstaande diagram).

---

## 🧲 Ontkoppelaars en andere inductieve lasten

De OS-Solenoid-Decoder kan ontkoppelaars, elektromagneten en andere inductieve lasten aansturen naast wisselaandrijvingen.

- **Enkele puls­modus** (aanbevolen) — stuurt een korte stroom­stoot, ideaal voor veer­belaste of tijds­gevoelige spoelen
- **Enkel continu modus** — houdt de uitgang continu aan, nuttig voor mono­stabiele relais of eenvoudige AAN/UIT-apparaten

![Bedradingsvoorbeeld ontkoppelaar](image-8.png)

⚠️ Ontkoppelaars kunnen oververhitten als ze te lang worden geschakeld — controleer altijd de datasheet van uw baan­merk en houd puls­tijden kort.

---

## ⚙️ De OS-Solenoid-Decoder configureren

Standaard werkt de decoder in de normale modus bij inschakeling. Twee LED's geven visuele feedback over wat er gebeurt.

---

## 🔦 LED-gedrag in bedrijfsmodus

| LED-patroon | Modus |
|-------------|-------|
| Beide LED's knipperen | Dubbele puls (standaard) |
| Eén LED knippert, één UIT | Enkele puls |
| Beide LED's AAN | Dubbel continu |
| Eén LED AAN | Enkel continu |
| Eén LED AAN + andere LED knippert | Electrofrog-modus (dubbele puls + hartpunt­relais) |

Wanneer uitgangen zijn geconfigureerd met gemengde typen, blijft de linker LED AAN en knippert de rechter LED continu eenmaal om de gemengde-configuratie­modus aan te geven.

---

## 🧰 Configuratie­modus activeren

Om de configuratie­modus te activeren:

1. Houd de configuratie­knop ingedrukt. De rechter LED begint te knipperen:
   - 1 knippering = Menu 1
   - 2 knipperingen = Menu 2
   - ... tot en met Menu 5
2. Laat de knop los wanneer de LED het gewenste menu bereikt.

Eenmaal in een menu:

- De linker LED knippert hetzelfde aantal keren als het menunummer (bijv. 3 knipperingen = Menu 3).
- Druk nogmaals op de knop om het menu te verlaten, tenzij de onderstaande sectie anders aangeeft.

![Configuratie­menu stroomschema](image-9.png)

---

## 🧠 Voordat u begint

Als u van plan bent gemengde uitgangs­typen te gebruiken (bijv. Enkel continu voor relais naast Dubbele puls voor wisselaandrijvingen), plan uw uitgangs­toewijzingen dan eerst op papier.

**Voorbeeld:** als uitgangen 5–8 Enkel continu moeten zijn (voor 8 relais) en uitgangen 1–4 Dubbel continu (voor wisselaandrijvingen), moet u:

1. Menu 2 gebruiken om de juiste uitgangs­typen toe te wijzen
2. Vervolgens Menu 1 gebruiken om DCC-adressen zorgvuldig toe te wijzen, omdat enkele uitgangen meer adressen gebruiken

---

## 📖 Menu­overzicht

| Menu | Functie |
|------|---------|
| 1 | DCC-adres­toewijzing |
| 2 | Uitgangs­type­selectie |
| 3 | Puls­tijd­configuratie |
| 4 | PWM-taak­cyclus |
| 5 | Globale instellingen & voorinstellingen |

---

## 🟠 Menu 1: DCC-adres­toewijzing

Gebruik dit menu om DCC-adressen toe te wijzen aan elke uitgang.

Regels:
- Dubbele modi gebruiken 1 adres
- Enkele modi gebruiken 2 adressen (A en B afzonderlijk)

Als u adres 20 toewijst aan uitgang 1 in enkele modus, bezet het de adressen 20 en 21. Uitgang 2 begint dan op 22. De decoder verwerkt deze verschuiving automatisch.

Uitgangen selecteren:
- Stuur DCC-accessoire­adres 1–8 om een uitgang te selecteren.
- Stuur een tweede adres om het aan die uitgang toe te wijzen.
- Stuur adres 9 als selector om hetzelfde adres tegelijk op alle uitgangen toe te passen.

In de unieke adresserings­modus kunt u elke uitgang een aangepast adres geven, inclusief herhaalde of overgeslagen nummers. De decoder keert onmiddellijk terug naar de bedrijfsmodus na toewijzing, tenzij de unieke modus actief is — in dat geval drukt u op de configuratie­knop om af te sluiten.

---

## 🟡 Menu 2: Uitgangs­type­selectie

Elke uitgang kan worden ingesteld op een van de volgende typen:

| Type-ID | Modus­beschrijving |
|---------|-------------------|
| 1 | Dubbele puls (standaard) |
| 2 | Dubbel continu |
| 3 | Enkele puls |
| 4 | Enkel continu |
| 5 | Dubbele puls met Electrofrog-relais­ondersteuning |

In Electrofrog-modus besturen uitgangen 1–4 de relais­paren op uitgangen 8–5 in omgekeerde volgorde (uitgang 1 → relais 8, uitgang 2 → relais 7, enz.).

Selecteer welke uitgang u wilt configureren door DCC-adres 1–8 te sturen.

---

## 🔵 Menu 3: Puls­tijd­configuratie

Stel de puls­tijd nauwkeurig in voor elke uitgang.

**Enkele puls­uitgangen:**
- Tijd wordt ingesteld in hele seconden
- Adres 10 = 10 seconden
- Bereik: 1–4096 seconden
- Standaard: 5 s

**Dubbele puls­uitgangen:**
- Tijd wordt ingesteld in stappen van 10 ms
- Adres 1 = 10 ms
- Maximum: 40,9 s (4096 × 10 ms)
- Standaard: 50 ms

Stuur adres 9 om dezelfde tijd tegelijk op alle uitgangen toe te passen.

---

## 🟣 Menu 4: PWM-taak­cyclus

Beschikbaar voor uitgangen geconfigureerd in continu modus (enkel of dubbel).

PWM vermindert het gemiddelde vermogen — ideaal voor langzame motoren zoals de MTB MP-1.

- PWM-frequentie: 50 Hz
- Adres 10 = 100% taak­cyclus (standaard; vol vermogen, geen PWM)

| Adres | Taak­cyclus |
|-------|------------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (standaard) |

Stuur adres 9 om dezelfde taak­cyclus op alle uitgangen toe te passen.

---

## 🔘 Menu 5: Globale instellingen & voorinstellingen

**Voorinstellingen — stel alle uitgangs­typen tegelijk in:**

| Adres | Voorinstelling |
|-------|----------------|
| 1 | Dubbele puls (standaard) |
| 2 | Dubbel continu |
| 3 | Enkele puls |
| 4 | Enkel continu |
| 5 | Dubbele puls met Electrofrog-modus |

**Speciale opties:**

| Adres | Instelling |
|-------|-----------|
| 20 | Unieke uitgangs­adressen uitschakelen (standaard) |
| 21 | Unieke uitgangs­adressen inschakelen |
| 30 | DCC EXT-commando­ondersteuning uitschakelen (standaard) |
| 31 | DCC EXT-puls­lengte­ondersteuning inschakelen |
| 40 | Locomotief­functiebe­sturing uitschakelen (standaard) |
| 41 | Locomotief­functies inschakelen (F1–F16, 1 adres) |
| 42 | Locomotief­functies inschakelen (F1–F4, 2+ adressen) |
| 996 / 1000 | Roco 4-adres­offset uitschakelen (standaard) |
| 997 / 1001 | Roco 4-adres­offset inschakelen |

---

## 📟 Locomotief­functiebe­sturing uitgelegd

U kunt de decoder bedienen via locomotief­functie­toetsen (F1–F16) in plaats van DCC-accessoire­commando's.

**Voordelen:**
- Werkt met handregelaars zoals de Roco Lokmaus 2
- Zeer snel schakelen — ideaal voor snelle baanbe­sturing

**Modi:**
- **F1–F16 modus:** gebruikt 1 locomotief­adres
- **F1–F4 modus:** gebruikt 2 of meer locomotief­adressen (handig voor handregelaars die alleen F1–F4 ondersteunen)

Het gebruikte locomotief­adres komt overeen met het DCC-adres dat is toegewezen aan uitgang 1.

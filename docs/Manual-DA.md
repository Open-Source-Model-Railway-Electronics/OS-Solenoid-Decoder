> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; 🇩🇰 DA &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Introduktion

OS-Solenoid-Decoder er en enkel, kraftfuld DCC-tilbehørsdekoder til skift af:

- Sporskifter (sporskiftemotorer)
- Relæer
- Afkoblere
- Enhver anden solenoid-drevet enhed

Den kan håndtere belastninger på op til 5 A og understøtter næsten enhver type sporskiftemotor.
Den kan også bruges i kombination med OS-relæer til at håndtere hjertestykke-polarisering for både Electrofrog- og Unifrog-sporskifter.

Denne dekoder er designet til at være:

- **Nem at kabelforbinde** — tilsluttbare skrueterminaler gør forudkabeltrækning ligetil og muliggør hurtig fjernelse eller udskiftning
- **Nem at konfigurere** — bruger udelukkende standard DCC-tilbehørskommandoer; ingen computer, ingen CV, ingen POM
- **Modulær** — valgfrie relæ- og transistorudvidelseskort
- **Robust** — indbygget overbelastningsbeskyttelse

Uanset om du bygger et stort anlæg eller bare ønsker noget, der fungerer uden besvær: denne dekoder er lavet til at klare opgaven.

---

## Indholdsfortegnelse

- [Egenskaber](#-egenskaber)
- [Tilslutning af dekoderen](#-tilslutning-af-dekoderen)
- [Strømforsyning](#-strømforsyning)
- [Solenoid-udgange](#-solenoid-udgange)
- [Relæudvidelse – Unifrog-polarisering](#-relæudvidelse--unifrog-polarisering)
- [Relæudvidelse – Electrofrog-polarisering](#-relæudvidelse--electrofrog-polarisering)
- [Relæudvidelse – Åben kontakt (general purpose)](#️-relæudvidelse--åben-kontakt-general-purpose)
- [Afkoblere og andre induktive belastninger](#-afkoblere-og-andre-induktive-belastninger)
- [Konfiguration af OS-Solenoid-Decoder](#️-konfiguration-af-os-solenoid-decoder)
- [LED-adfærd i driftstilstand](#-led-adfærd-i-driftstilstand)
- [Adgang til konfigurationstilstand](#-adgang-til-konfigurationstilstand)
- [Inden du starter](#-inden-du-starter)
- [Menooversigt](#-menooversigt)
- [Menu 1: DCC-adressetildeling](#-menu-1-dcc-adressetildeling)
- [Menu 2: Udgangstypevalg](#-menu-2-udgangstypevalg)
- [Menu 3: Pulstidskonfiguration](#-menu-3-pulstidskonfiguration)
- [Menu 4: PWM-arbejdscyklus](#-menu-4-pwm-arbejdscyklus)
- [Menu 5: Globale indstillinger og forudindstillinger](#-menu-5-globale-indstillinger-og-forudindstillinger)
- [Lokomotivfunktionsstyring forklaret](#-lokomotivfunktionsstyring-forklaret)

---

## 🔧 Egenskaber

- **Op til 5 A samlet udgangsstrøm** — driver tunge solenoider, relæer eller sporskiftemotorer uden eksterne boostere
- **Tilsluttbare skrueterminaler** — gør forudkabeltrækning nem og muliggør hurtig fjernelse eller udskiftning af dekoderen
- **Flere udgangstyper:**
  - Dobbelt puls (standard)
  - Enkelt puls
  - Dobbelt stabil
  - Enkelt stabil
  - Dobbelt puls med Electrofrog-relæ
- **Én udgang ad gangen** — dekoderen skifter ét udgangssæt ad gangen for at forhindre overbelastning
- **Valgfri CDU-modulunderstøttelse** — reducerer strømforbrug og forlænger sporskiftemotorens levetid
- **Overbelastningsdetektion og -beskyttelse** — udgange deaktiveres automatisk, hvis en overbelastning registreres
- **Konfiguration udelukkende via DCC-kommandoer** — ingen programmeringssoftware eller hardware påkrævet
- **Foruddefinerede konfigurationsforudindstillinger** — skift hurtigt alle udgange til puls-, stabil- eller Electrofrog-tilstand med en enkelt DCC-kommando
- **Lokomotivfunktionsstyring** (F1–F16) — til hurtig skift via styrenheder som Roco Lokmaus eller Multimaus
- **Roco-adresseforskydningsunderstøttelse** — indbygget understøttelse af Roco 4-adresse-forskydning
- **Udvidelsesmuligheder med relæ- og transistorkort:**
  - Dobbelt relæmodul til Electrofrog-sporskifte-polarisering
  - Enkelt selvholdende relæ til Unifrog-polaritetsskift
  - Åben-kontakt relæmoduler til general-purpose DCC-relæstyring
  - Transistordrivermodul til 2-trådede sporskiftemotorer

---

## 🔌 Tilslutning af dekoderen

OS-Solenoid-Decoder følger et klart og konsistent kabeltrækningslayout. Strøm tilsluttes øverst, udgange er på begge sider.

---

## 🔋 Strømforsyning

- Forbind enten DCC-skinnesænkning eller en DC-strømforsyning (maks. 19 V) til dekoderen.
- Både DCC-signalet og strømleredningerne tilsluttes fra dekodernes øverste side.
- ⚠️ Brug ikke AC-spænding — dette vil beskadige dekoderen.

---

## ⚡ Solenoid-udgange

Dekoderen leverer 8 dobbelte udgangsblokke, designet til klassiske toviklings-sporskiftemotorer.

Hvert udgangsblok har:

- To ydre skrueterminaler — til venstre og højre spole (A og B)
- Én midterterminal — til den fælles ledning (COM), delt mellem de to spoler

Dette layout giver dig mulighed for:

- At drive op til 8 toviklings-sporskiftemotorer (f.eks. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Eller forbinde 3-trådede sporskiftemotorer som MTB MP-1 direkte

Udgange er grupperet i par med klar A-, COM- og B-mærkning.

![Solenoid-dekoder med 8 toviklings-sporskiftemotorer tilsluttet](image.png)

Selvom dekoderen ikke er designet til signalstyring, kan den drive simple to-aspekt-signaler ved hjælp af de samme udgange.

![Kabeltrækningseksempel for to-aspekt-signal](image-1.png)

---

## 🔌 Relæudvidelse – Unifrog-polarisering

Denne udvidelse forsyner automatisk hjertestykket i Unifrog-sporskifter ved hjælp af selvholdende relæer.

- Relækortet består af fire små relæenheder, som kan knækkes fra hinanden, hvis du har brug for færre end fire.

![Selvholdende relæudvidelseskort](image-2.png)

- Relæerne aktiveres af det samme signal, der bruges til at udløse sporskiftemotoren — ingen ekstra konfiguration er nødvendig.
- Hver relæenhed skifter hjertestykke-polariteten baseret på sporskiftets retning.

Med ét relæ per sporskifte håndterer denne udvidelse op til 8 Unifrog-hjertestykker ved hjælp af to kort.

![Relæudvidelse monteret på dekoder til Unifrog-kabeltrækning](image-3.png)

- Relækortet sættes direkte ind i dekodernes udvidelsesheader, men kan også monteres eksternt nær sporskiftet.

![Eksempel på eksternt monteret relæudvidelse](image-4.png)

Dette relæmodul er også kompatibelt med andre solenoid-dekodere.

---

## ⚡ Relæudvidelse – Electrofrog-polarisering

Electrofrog-sporskifter kræver to relæskift per sporskifte:

1. Ét til at afbryde hjertestykket inden skift af sporskiftemotoren
2. Ét til at genoprette forbindelsen med den korrekte polaritet bagefter

Denne udvidelse håndterer den sekvens automatisk. Den består af fire dobbelte relæmoduler, der er permanent forbundne.

- Det sættes ind i venstre side af dekoderen (markeret til Electrofrog-brug).
- Hvert relæpar er koblet til én solenoid-udgang: udgang 1 → relæpar 1, udgang 2 → relæpar 2 osv.
- Disse moduler kan ikke adskilles, da de deler skinnestrøm og intern logik.

Dekoderen har en særlig forudindstillings-tilstand, der aktiverer Electrofrog-skiftsekvensen.
Hvis hjertestykke-polariteten er forkert efter installation, vend jumberne på relæmodulet for at rette det — ingen omprogrammering er nødvendig.

---

## ⚙️ Relæudvidelse – Åben kontakt (general purpose)

Til skift af eksterne enheder (lys, signaler, logikkredsløb) ved hjælp af rene relækontakter:

- Hver enhed leverer et dobbeltskift (NO/NC)-relæ, der kan styres via DCC.
- Op til 16 individuelt adresserbare relækontakter ved fuld bestyckning.
- Modulerne sættes direkte ind i dekoderen eller kan bruges eksternt med ledninger.
- Tilgængelig i en gennemhuls-DIY-version og en kompakt SMD-version.

Ligesom Unifrog-relækortene kan disse moduler knækkes fra hinanden og genbruges med andre DCC-solenoid-dekodere.

![General-purpose relæmoduler monteret på dekoderen](image-5.png)

![Detail af general-purpose relæmodul](image-6.png)

General Purpose-relæudvidelsen kan også polarisere Electrofrog-sporskifter med lidt mere kabeltrækning:

- Brug NO (Normally Open)-kontakterne
- Sæt begge COM-kontakter i sløjfe og forbind dem til hjertestykket
- Forbind NO-kontakterne til skinnestrømsshinnerne

![Electrofrog-kabeltrækning ved hjælp af General Purpose-relæmoduler](image-7.png)

Hvis et hjertestykke ender med forkert polaritet, byt de to skinnestrømsleredninger (som vist for hjertestykke 4 i diagrammet ovenfor).

---

## 🧲 Afkoblere og andre induktive belastninger

OS-Solenoid-Decoder kan drive afkoblere, elektromagneter og andre induktive belastninger ud over sporskiftemotorer.

- **Enkelt puls-tilstand** (anbefalet) — sender et kort strømudbrud, ideelt til fjederspændte eller tidsfølsomme spoler
- **Enkelt stabil-tilstand** — holder udgangen kontinuerligt tændt, nyttigt til monostabile relæer eller simple TIL/FRA-enheder

![Afkoblerkabeltrækningseksempel](image-8.png)

⚠️ Afkoblere kan overophede, hvis de tændes for længe — tjek altid dataarket for dit sporvarebrands og hold pulstiderne korte.

---

## ⚙️ Konfiguration af OS-Solenoid-Decoder

Som standard fungerer dekoderen i normal tilstand, når den tændes. To LED'er giver visuel tilbagemelding om, hvad der sker.

---

## 🔦 LED-adfærd i driftstilstand

| LED-mønster | Tilstand |
|-------------|------|
| Begge LED'er blinker | Dobbelt puls (standard) |
| Én LED blinker, én SLUKKET | Enkelt puls |
| Begge LED'er TÆNDt | Dobbelt stabil |
| Én LED TÆNDt | Enkelt stabil |
| Én LED TÆNDt + anden LED blinker | Electrofrog-tilstand (dobbelt puls + frog-relæ) |

Når udgange er konfigureret med blandede typer, forbliver venstre LED TÆNDt og højre LED blinker én gang kontinuerligt for at angive blandet-konfigurationstilstand.

---

## 🧰 Adgang til konfigurationstilstand

For at gå ind i konfigurationstilstand:

1. Hold konfigurationsknappen nede. Højre LED begynder at blinke:
   - 1 blink = Menu 1
   - 2 blink = Menu 2
   - ... op til Menu 5
2. Slip knappen, når LED'en når den menu, du ønsker.

Når du er i en menu:

- Venstre LED blinker det samme antal gange som menunummeret (f.eks. 3 blink = Menu 3).
- Tryk på knappen igen for at afslutte menuen, medmindre afsnittet nedenfor siger andet.

![Konfigurationsmenu-flowdiagram](image-9.png)

---

## 🧠 Inden du starter

Hvis du planlægger at bruge blandede udgangstyper (f.eks. Enkelt stabil til relæer sammen med Dobbelt puls til sporskiftemotorer), planlæg dine udgangstildelinger på papir først.

**Eksempel:** Hvis udgange 5–8 skal være Enkelt stabil (til 8 relæer) og udgange 1–4 skal være Dobbelt stabil (til sporskiftemotorer), skal du:

1. Bruge Menu 2 til at tildele de korrekte udgangstyper
2. Derefter bruge Menu 1 til omhyggeligt at tildele DCC-adresser, fordi enkeltudgange bruger flere adresser

---

## 📖 Menooversigt

| Menu | Funktion |
|------|----------|
| 1 | DCC-adressetildeling |
| 2 | Udgangstypevalg |
| 3 | Pulstidskonfiguration |
| 4 | PWM-arbejdscyklus |
| 5 | Globale indstillinger og forudindstillinger |

---

## 🟠 Menu 1: DCC-adressetildeling

Brug denne menu til at tildele DCC-adresser til hver udgang.

Regler:
- Dobbelte tilstande bruger 1 adresse
- Enkle tilstande bruger 2 adresser (A og B separat)

Hvis du tildeler adresse 20 til udgang 1 i enkelt tilstand, vil den optage adresserne 20 og 21. Udgang 2 starter derefter ved 22. Dekoderen håndterer denne forskydning automatisk.

Valg af udgange:
- Send DCC-tilbehørsadresse 1–8 for at vælge en udgang.
- Send en anden adresse for at tildele den til den pågældende udgang.
- Send adresse 9 som vælger for at anvende den samme adresse på alle udgange på én gang.

I unik adresseringstilstand kan du give hver udgang en brugerdefineret adresse, herunder gentagne eller udeladte numre. Dekoderen vender tilbage til driftstilstand umiddelbart efter tildeling, medmindre unik tilstand er aktiv — i så fald tryk på konfigurationsknappen for at afslutte.

---

## 🟡 Menu 2: Udgangstypevalg

Hver udgang kan indstilles til en af følgende typer:

| Type-ID | Tilstandsbeskrivelse |
|---------|-----------------|
| 1 | Dobbelt puls (standard) |
| 2 | Dobbelt stabil |
| 3 | Enkelt puls |
| 4 | Enkelt stabil |
| 5 | Dobbelt puls med Electrofrog-relæunderstøttelse |

I Electrofrog-tilstand styrer udgange 1–4 relæparrene på udgange 8–5 i omvendt rækkefølge (udgang 1 → relæ 8, udgang 2 → relæ 7 osv.).

Vælg hvilken udgang der skal konfigureres ved at sende DCC-adresse 1–8.

---

## 🔵 Menu 3: Pulstidskonfiguration

Finjuster pulstiden for hver udgang.

**Enkelt puls-udgange:**
- Tid angives i hele sekunder
- Adresse 10 = 10 sekunder
- Område: 1–4096 sekunder
- Standard: 5 s

**Dobbelt puls-udgange:**
- Tid angives i trin på 10 ms
- Adresse 1 = 10 ms
- Maksimum: 40,9 s (4096 × 10 ms)
- Standard: 50 ms

Send adresse 9 for at anvende den samme tid på alle udgange på én gang.

---

## 🟣 Menu 4: PWM-arbejdscyklus

Tilgængelig for udgange konfigureret i stabil tilstand (enkelt eller dobbelt).

PWM reducerer den gennemsnitlige leverede effekt — ideel til langsomme motorer som MTB MP-1.

- PWM-frekvens: 50 Hz
- Adresse 10 = 100% arbejdscyklus (standard; fuld effekt, ingen PWM)

| Adresse | Arbejdscyklus |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (standard) |

Send adresse 9 for at anvende den samme arbejdscyklus på alle udgange.

---

## 🔘 Menu 5: Globale indstillinger og forudindstillinger

**Forudindstillinger — indstil alle udgangstyper på én gang:**

| Adresse | Forudindstillingstilstand |
|---------|------------|
| 1 | Dobbelt puls (standard) |
| 2 | Dobbelt stabil |
| 3 | Enkelt puls |
| 4 | Enkelt stabil |
| 5 | Dobbelt puls med Electrofrog-tilstand |

**Særlige muligheder:**

| Adresse | Indstilling |
|---------|---------|
| 20 | Deaktiver unikke udgangsadresser (standard) |
| 21 | Aktiver unikke udgangsadresser |
| 30 | Deaktiver DCC EXT-kommandounderstøttelse (standard) |
| 31 | Aktiver DCC EXT-pulslængdeunderstøttelse |
| 40 | Deaktiver lokomotivfunktionsstyring (standard) |
| 41 | Aktiver lokomotivfunktioner (F1–F16, 1 adresse) |
| 42 | Aktiver lokomotivfunktioner (F1–F4, 2+ adresser) |
| 996 / 1000 | Deaktiver Roco 4-adresse-forskydning (standard) |
| 997 / 1001 | Aktiver Roco 4-adresse-forskydning |

---

## 📟 Lokomotivfunktionsstyring forklaret

Du kan styre dekoderen ved hjælp af lokomotivfunktionsknapper (F1–F16) i stedet for DCC-tilbehørskommandoer.

**Fordele:**
- Virker med styrenheder som Roco Lokmaus 2
- Meget hurtig skift — ideel til hurtig anlægsstyring

**Tilstande:**
- **F1–F16-tilstand:** bruger 1 lokomotivadresse
- **F1–F4-tilstand:** bruger 2 eller flere lokomotivadresser (nyttigt til styrenheder, der kun understøtter F1–F4)

Den anvendte lokomotivadresse svarer til DCC-adressen tildelt til udgang 1.

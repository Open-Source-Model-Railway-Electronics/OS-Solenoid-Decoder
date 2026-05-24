> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; 🇳🇴 NO &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Innledning

OS-Solenoid-Decoder er en enkel, kraftig DCC-tilbehørsdekoder for kobling av:

- Sporskifter (sporskiftemotorer)
- Reléer
- Avkoplere
- Enhver annen solenoidbasert enhet

Den kan håndtere belastninger på opptil 5 A og støtter nesten alle typer sporskiftemotorer.
Den kan også brukes i kombinasjon med OS-relays for å håndtere frog-polarisering for både electrofrog- og unifrog-sporskifter.

Denne dekoderen er utviklet for å være:

- **Enkel å kable** — uttrekkbare skrueterminaler gjør forhåndskabling enkel og muliggjør rask fjerning eller utskiftning
- **Enkel å konfigurere** — bruker kun standard DCC-tilbehørskommandoer; ingen datamaskin, ingen CV, ingen POM
- **Modulær** — valgfrie relé- og transistorutvidelseskort
- **Robust** — innebygd overbelastningsbeskyttelse

Enten du bygger et stort anlegg eller bare vil ha noe som fungerer uten problemer: denne dekoderen er laget for å fullføre jobben.

---

## Innholdsfortegnelse

- [Egenskaper](#-egenskaper)
- [Tilkobling av dekoderen](#-tilkobling-av-dekoderen)
- [Strømforsyning](#-strømforsyning)
- [Solenoidutganger](#-solenoidutganger)
- [Relé-utvidelse – Unifrog-polarisering](#-relé-utvidelse--unifrog-polarisering)
- [Relé-utvidelse – Electrofrog-polarisering](#-relé-utvidelse--electrofrog-polarisering)
- [Relé-utvidelse – Åpen kontakt (generelt formål)](#️-relé-utvidelse--åpen-kontakt-generelt-formål)
- [Avkoplere og andre induktive laster](#-avkoplere-og-andre-induktive-laster)
- [Konfigurering av OS-Solenoid-Decoder](#️-konfigurering-av-os-solenoid-decoder)
- [LED-atferd i driftsmodus](#-led-atferd-i-driftsmodus)
- [Gå inn i konfigurasjonsmodus](#-gå-inn-i-konfigurasjonsmodus)
- [Før du starter](#-før-du-starter)
- [Menyoversikt](#-menyoversikt)
- [Meny 1: DCC-adressetildeling](#-meny-1-dcc-adressetildeling)
- [Meny 2: Valg av utgangstype](#-meny-2-valg-av-utgangstype)
- [Meny 3: Pulstidkonfigurasjon](#-meny-3-pulstidkonfigurasjon)
- [Meny 4: PWM arbeidsyklus](#-meny-4-pwm-arbeidsyklus)
- [Meny 5: Globale innstillinger og forhåndsinnstillinger](#-meny-5-globale-innstillinger-og-forhåndsinnstillinger)
- [Forklaring av lokomotivfunksjonsstyring](#-forklaring-av-lokomotivfunksjonsstyring)

---

## 🔧 Egenskaper

- **Opptil 5 A total utgangsstrøm** — driver tunge solenoider, reléer eller sporskiftemotorer uten eksterne forsterkere
- **Uttrekkbare skrueterminaler** — gjør forhåndskabling enkel og muliggjør rask fjerning eller utskiftning av dekoderen
- **Flere utgangsmoduser:**
  - Dobbel puls (standard)
  - Enkel puls
  - Dobbel stasjonær
  - Enkel stasjonær
  - Dobbel puls med Electrofrog-relé
- **Én utgang av gangen** — dekoderen bytter ett utgangspar av gangen for å forhindre overbelastning
- **Valgfri CDU-modul-støtte** — reduserer strømforbruk og forlenger sporskiftemotorens levetid
- **Overbelastningsdeteksjon og -beskyttelse** — utganger deaktiveres automatisk hvis overbelastning oppdages
- **Konfigurasjon kun via DCC-kommandoer** — ingen programmeringsprogramvare eller -maskinvare nødvendig
- **Forhåndsdefinerte konfigurasjonsforhåndsinnstillinger** — bytt raskt alle utganger til puls-, stasjonær- eller electrofrog-modus med én enkelt DCC-kommando
- **Lokomotivfunksjonsstyring** (F1–F16) — for rask kobling via regulatorer som Roco Lokmaus eller Multimaus
- **Roco-adresseforskyvning støtte** — innebygd støtte for Roco 4-adresseforskyvning
- **Utvidbar med relé- og transistorkort:**
  - Dobbelt relé-modul for electrofrog sporskifte-polarisering
  - Enkelt selvholdende relé for unifrog-polaritetskobling
  - Åpen-kontakt relé-moduler for generell DCC relé-styring
  - Transistordrivermodul for 2-leder sporskiftemotorer

---

## 🔌 Tilkobling av dekoderen

OS-Solenoid-Decoder følger et tydelig og konsistent kablingslayout. Strøm kobles til øverst, utganger er på begge sider.

---

## 🔋 Strømforsyning

- Koble enten DCC sporsspenning eller en DC-strømforsyning (maks. 19 V) til dekoderen.
- Både DCC-signalet og strømlinjene kobles fra toppen av dekoderen.
- ⚠️ Ikke bruk AC-spenning — dette vil skade dekoderen.

---

## ⚡ Solenoidutganger

Dekoderen gir 8 duale utgangsblokker, utviklet for klassiske dobbeltspolesporskiftemotorer.

Hver utgangsblokk har:

- To ytre skrueterminaler — for venstre og høyre spole (A og B)
- Én midtre terminal — for den felles ledningen (COM), delt mellom de to spolene

Dette oppsettet lar deg:

- Drive opptil 8 dobbeltspolesporskiftemotorer (f.eks. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Eller koble til 3-leder sporskiftemotorer som MTB MP-1 direkte

Utganger er gruppert i par med tydelig A-, COM- og B-merking.

![Solenoid-dekoder med 8 dobbeltspolesporskiftemotorer tilkoblet](image.png)

Selv om dekoderen ikke er utformet for signalstyring, kan den drive enkle tosignal-aspekt-signaler ved hjelp av de samme utgangene.

![Eksempel på 2-aspekt signalkabling](image-1.png)

---

## 🔌 Relé-utvidelse – Unifrog-polarisering

Denne utvidelsen forsyner automatisk frogen til unifrog-sporskifter ved hjelp av selvholdende reléer.

- Relé-kortet består av fire små relé-enheter, som kan brytes fra hverandre hvis du trenger færre enn fire.

![Selvholdende relé-utvidelseskort](image-2.png)

- Reléene låses av det samme signalet som brukes til å utløse sporskiftemotoren — ingen ekstra konfigurasjon er nødvendig.
- Hver relé-enhet bytter frog-polariteten basert på sporskiftets retning.

Med ett relé per sporskifte håndterer denne utvidelsen opptil 8 unifrog-froger med to kort.

![Relé-utvidelse montert på dekoder for unifrog-kabling](image-3.png)

- Relé-kortet plugges direkte inn i dekorderens utvidelsesoverskog, men kan også monteres på avstand nær sporskiftet.

![Eksempel på fjerntmontert relé-utvidelse](image-4.png)

Denne relé-modulen er også kompatibel med andre solenoid-dekodere.

---

## ⚡ Relé-utvidelse – Electrofrog-polarisering

Electrofrog-sporskifter krever to relé-koblere per sporskifte:

1. En for å frakoble frogen før bytting av sporskiftemotoren
2. En for å koble den til igjen med riktig polaritet etterpå

Denne utvidelsen håndterer denne sekvensen automatisk. Den består av fire doble relé-moduler, permanent koblet.

- Den plugges inn i venstre side av dekoderen (merket for electrofrog-bruk).
- Hvert relé-par er koblet til én solenoidutgang: utgang 1 → relé-par 1, utgang 2 → relé-par 2, osv.
- Disse modulene kan ikke skilles fra hverandre, da de deler sporstrøm og intern logikk.

Dekoderen har en spesiell forhåndsinnstillingsmodus som aktiverer electrofrog-koblingssekvensen.
Hvis frog-polariteten er feil etter installasjon, snu jumperne på relé-modulen for å korrigere dette — ingen omprogrammering nødvendig.

---

## ⚙️ Relé-utvidelse – Åpen kontakt (generelt formål)

For kobling av eksterne enheter (lys, signaler, logikkretser) ved hjelp av rene reléekontakter:

- Hver enhet gir et dobbel-kast (NO/NC) relé, kontrollerbart via DCC.
- Opptil 16 individuelt adresserbare reléekontakter når fullt bestykket.
- Modulene plugges direkte inn i dekoderen eller kan brukes på avstand med ledninger.
- Tilgjengelig i en gjennomhulls DIY-versjon og en kompakt SMD-versjon.

Som unifrog relé-kortene kan disse modulene brytes fra hverandre og gjenbrukes med andre DCC solenoid-dekodere.

![Generelle relé-moduler montert på dekoderen](image-5.png)

![Detaljbilde av generell relé-modul](image-6.png)

General Purpose relé-utvidelsen kan også polarisere electrofrog-sporskifter med litt mer kabling:

- Bruk NO-kontaktene (Normally Open)
- Koble begge COM-kontaktene sammen og koble dem til frogen
- Koble NO-kontaktene til sporstrømsinnene

![Electrofrog-kabling med General Purpose relé-moduler](image-7.png)

Hvis en frog ender opp med feil polaritet, bytt de to sporstrømlinjene (som vist for frog 4 i diagrammet ovenfor).

---

## 🧲 Avkoplere og andre induktive laster

OS-Solenoid-Decoder kan drive avkoplere, elektromagneter og andre induktive laster i tillegg til sporskiftemotorer.

- **Enkel puls-modus** (anbefalt) — sender en kort strømpuls, ideell for fjærbelastede eller tidssensitive spoler
- **Enkel stasjonær modus** — holder utgangen kontinuerlig på, nyttig for monostabile reléer eller enkle PÅ/AV-enheter

![Eksempel på avkoplingskabling](image-8.png)

⚠️ Avkoplere kan overopphetes hvis de kobles inn for lenge — sjekk alltid dataarket for spormerket ditt og hold pulstidene korte.

---

## ⚙️ Konfigurering av OS-Solenoid-Decoder

Som standard opererer dekoderen i normal modus når den settes under spenning. To LED-er gir visuell tilbakemelding om hva som skjer.

---

## 🔦 LED-atferd i driftsmodus

| LED-mønster | Modus |
|-------------|------|
| Begge LED-er blinker | Dobbel puls (standard) |
| Én LED blinker, én AV | Enkel puls |
| Begge LED-er PÅ | Dobbel stasjonær |
| Én LED PÅ | Enkel stasjonær |
| Én LED PÅ + annen LED blinker | Electrofrog-modus (dobbel puls + frog-relé) |

Når utganger er konfigurert med blandede typer, forblir venstre LED PÅ og høyre LED blinker én gang kontinuerlig for å indikere blandet-konfig-modus.

---

## 🧰 Gå inn i konfigurasjonsmodus

For å gå inn i konfigurasjonsmodus:

1. Hold inne konfigurasjonsknappen. Høyre LED begynner å blinke:
   - 1 blink = Meny 1
   - 2 blink = Meny 2
   - ... opptil Meny 5
2. Slipp knappen når LED-en når menyen du ønsker.

Når du er i en meny:

- Venstre LED blinker samme antall ganger som menynummeret (f.eks. 3 blink = Meny 3).
- Trykk på knappen igjen for å avslutte menyen, med mindre avsnittet nedenfor sier noe annet.

![Konfigurasjonsmenyflytkart](image-9.png)

---

## 🧠 Før du starter

Hvis du planlegger å bruke blandede utgangstyper (f.eks. Enkel stasjonær for reléer ved siden av Dobbel puls for sporskiftemotorer), planlegg utgangsfordelingene på papir først.

**Eksempel:** hvis utganger 5–8 skal være Enkel stasjonær (for 8 reléer) og utganger 1–4 skal være Dobbel stasjonær (for sporskiftemotorer), må du:

1. Bruke Meny 2 til å tildele de riktige utgangstype
2. Deretter bruke Meny 1 til å tildele DCC-adresser nøye, fordi Enkle utganger bruker flere adresser

---

## 📖 Menyoversikt

| Meny | Funksjon |
|------|----------|
| 1 | DCC-adressetildeling |
| 2 | Valg av utgangstype |
| 3 | Pulstidkonfigurasjon |
| 4 | PWM arbeidsyklus |
| 5 | Globale innstillinger og forhåndsinnstillinger |

---

## 🟠 Meny 1: DCC-adressetildeling

Bruk denne menyen til å tildele DCC-adresser til hver utgang.

Regler:
- Doble moduser bruker 1 adresse
- Enkle moduser bruker 2 adresser (A og B separat)

Hvis du tildeler adresse 20 til Utgang 1 i Enkel modus, vil den oppta adressene 20 og 21. Utgang 2 vil da starte på 22. Dekoderen håndterer denne forskyvelssen automatisk.

Velge utganger:
- Send DCC-tilbehørsadresse 1–8 for å velge en utgang.
- Send en andre adresse for å tildele den til den utgangen.
- Send adresse 9 som velger for å anvende samme adresse på alle utganger samtidig.

I unik adresseringsmodus kan du gi hver utgang en egendefinert adresse, inkludert gjentatte eller hoppede numre. Dekoderen returnerer til driftsmodus umiddelbart etter tildeling, med mindre unik modus er aktiv — i så fall trykk på konfig-knappen for å avslutte.

---

## 🟡 Meny 2: Valg av utgangstype

Hver utgang kan settes til én av følgende typer:

| Type-ID | Modusbeskrivelse |
|---------|-----------------|
| 1 | Dobbel puls (standard) |
| 2 | Dobbel stasjonær |
| 3 | Enkel puls |
| 4 | Enkel stasjonær |
| 5 | Dobbel puls med Electrofrog relé-støtte |

I Electrofrog-modus styrer utganger 1–4 relé-parene på utganger 8–5 i omvendt rekkefølge (utgang 1 → relé 8, utgang 2 → relé 7, osv.).

Velg hvilken utgang som skal konfigureres ved å sende DCC-adresse 1–8.

---

## 🔵 Meny 3: Pulstidkonfigurasjon

Finjuster pulstiden for hver utgang.

**Enkle puls-utganger:**
- Tid angis i hele sekunder
- Adresse 10 = 10 sekunder
- Område: 1–4096 sekunder
- Standard: 5 s

**Doble puls-utganger:**
- Tid angis i 10 ms-trinn
- Adresse 1 = 10 ms
- Maksimum: 40,9 s (4096 × 10 ms)
- Standard: 50 ms

Send adresse 9 for å anvende samme tid på alle utganger samtidig.

---

## 🟣 Meny 4: PWM arbeidsyklus

Tilgjengelig for utganger konfigurert i Stasjonær modus (Enkel eller Dobbel).

PWM reduserer den gjennomsnittlige effekten som leveres — ideelt for trege motorer som MTB MP-1.

- PWM-frekvens: 50 Hz
- Adresse 10 = 100 % arbeidsyklus (standard; full effekt, ingen PWM)

| Adresse | Arbeidsyklus |
|---------|-----------|
| 1 | 10 % |
| 2 | 20 % |
| ... | ... |
| 10 | 100 % (standard) |

Send adresse 9 for å anvende samme arbeidsyklus på alle utganger.

---

## 🔘 Meny 5: Globale innstillinger og forhåndsinnstillinger

**Forhåndsinnstillinger — angi alle utgangstyper på én gang:**

| Adresse | Forhåndsinnstillingsmodus |
|---------|------------|
| 1 | Dobbel puls (standard) |
| 2 | Dobbel stasjonær |
| 3 | Enkel puls |
| 4 | Enkel stasjonær |
| 5 | Dobbel puls med Electrofrog-modus |

**Spesielle alternativer:**

| Adresse | Innstilling |
|---------|---------|
| 20 | Deaktiver unike utgangsadresser (standard) |
| 21 | Aktiver unike utgangsadresser |
| 30 | Deaktiver DCC EXT-kommandostøtte (standard) |
| 31 | Aktiver DCC EXT pulslengde-støtte |
| 40 | Deaktiver lokomotivfunksjonsstyring (standard) |
| 41 | Aktiver lokomotivfunksjoner (F1–F16, 1 adresse) |
| 42 | Aktiver lokomotivfunksjoner (F1–F4, 2+ adresser) |
| 996 / 1000 | Deaktiver Roco 4-adresseforskyvning (standard) |
| 997 / 1001 | Aktiver Roco 4-adresseforskyvning |

---

## 📟 Forklaring av lokomotivfunksjonsstyring

Du kan styre dekoderen ved hjelp av lokomotivfunksjonstaster (F1–F16) i stedet for DCC-tilbehørskommandoer.

**Fordeler:**
- Fungerer med regulatorer som Roco Lokmaus 2
- Svært rask kobling — ideelt for rask anleggsstyring

**Moduser:**
- **F1–F16-modus:** bruker 1 lokoadresse
- **F1–F4-modus:** bruker 2 eller flere lokoadresser (nyttig for regulatorer som kun støtter F1–F4)

Lokoadressen som brukes samsvarer med DCC-adressen tildelt Utgang 1.

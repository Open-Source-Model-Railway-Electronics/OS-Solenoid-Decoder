> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; 🇸🇪 SV &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Introduktion

OS-Solenoid-Decoder är en enkel och kraftfull DCC-tillbehörsdecoder för koppling av:

- Växlar (växelmotorer)
- Reläer
- Avkopplare
- Alla andra solenoidstyrda enheter

Den kan hantera belastningar upp till 5 A och stöder nästan alla typer av växelmotorer.
Den kan också användas i kombination med OS-relays för att hantera hjärtpunktspolarisering för både Electrofrog- och Unifrog-växlar.

Denna decoder är utformad för att vara:

- **Enkel att koppla** — inkopplingsbara skruvplintrar gör förkoppling enkel och tillåter snabb demontering eller utbyte
- **Enkel att konfigurera** — använder enbart standard DCC-tillbehörskommandon; ingen dator, ingen CV, ingen POM
- **Modulär** — valfria relä- och transistorutvidgningskort
- **Robust** — inbyggt överlastskydd

Oavsett om du bygger en stor bana eller bara vill ha något som fungerar utan krångel: denna decoder är gjord för att klara jobbet.

---

## Innehållsförteckning

- [Funktioner](#-funktioner)
- [Ansluta decodern](#-ansluta-decodern)
- [Strömförsörjning](#-strömförsörjning)
- [Solenoidutgångar](#-solenoidutgångar)
- [Reläutvidgning – Unifrog-polarisering](#-reläutvidgning--unifrog-polarisering)
- [Reläutvidgning – Electrofrog-polarisering](#-reläutvidgning--electrofrog-polarisering)
- [Reläutvidgning – Öppen kontakt (generell användning)](#️-reläutvidgning--öppen-kontakt-generell-användning)
- [Avkopplare och andra induktiva laster](#-avkopplare-och-andra-induktiva-laster)
- [Konfigurera OS-Solenoid-Decoder](#️-konfigurera-os-solenoid-decoder)
- [LED-beteende i driftläge](#-led-beteende-i-driftläge)
- [Aktivera konfigurationsläge](#-aktivera-konfigurationsläge)
- [Innan du börjar](#-innan-du-börjar)
- [Menyöversikt](#-menyöversikt)
- [Meny 1: DCC-adresstilldelning](#-meny-1-dcc-adresstilldelning)
- [Meny 2: Val av utgångstyp](#-meny-2-val-av-utgångstyp)
- [Meny 3: Pulstidskonfiguration](#-meny-3-pulstidskonfiguration)
- [Meny 4: PWM-driftcykel](#-meny-4-pwm-driftcykel)
- [Meny 5: Globala inställningar och förinställningar](#-meny-5-globala-inställningar-och-förinställningar)
- [Lokfunktionsstyrning förklarad](#-lokfunktionsstyrning-förklarad)

---

## 🔧 Funktioner

- **Upp till 5 A total utgångsström** — driver tunga solenoider, reläer eller växelmotorer utan externa boostrar
- **Inkopplingsbara skruvplintrar** — gör förkoppling enkel och tillåter snabb demontering eller utbyte av decodern
- **Flera utgångslägen:**
  - Dubbel puls (standard)
  - Enkel puls
  - Dubbel kontinuerlig
  - Enkel kontinuerlig
  - Dubbel puls med Electrofrog-relä
- **En utgång åt gången** — decodern kopplar ett utgångspar åt gången för att förhindra överlast
- **Valfritt CDU-modulstöd** — minskar strömförbrukningen och förlänger växelmotorns livslängd
- **Överlastdetektering och -skydd** — utgångarna inaktiveras automatiskt om överlast detekteras
- **Konfigurering via enbart DCC-kommandon** — ingen programvara eller hårdvara för programmering krävs
- **Fördefinierade konfigurationsförinställningar** — ändra snabbt alla utgångar till puls-, kontinuerligt- eller Electrofrog-läge med ett enda DCC-kommando
- **Lokfunktionsstyrning** (F1–F16) — för snabb koppling via reglage som Roco Lokmaus eller Multimaus
- **Stöd för Roco-adressoffset** — inbyggt stöd för Rocos 4-adressoffset
- **Utvidgningsbar med relä- och transistorkort:**
  - Dubbel relämodul för Electrofrog-växelpolarisering
  - Enkelt låsande relä för Unifrog-polaritetsväxling
  - Öppen kontakt-relämoduler för generell DCC-reläkontroll
  - Transistordrivarmodul för 2-tråds växelmotorer

---

## 🔌 Ansluta decodern

OS-Solenoid-Decoder följer en tydlig och konsekvent kopplingsschema. Ström ansluts överst, utgångarna är på båda sidor.

---

## 🔋 Strömförsörjning

- Anslut antingen DCC-spårspänning eller en DC-strömförsörjning (max. 19 V) till decodern.
- Både DCC-signalen och strömledarna ansluts från decorderns ovansida.
- ⚠️ Använd inte AC-spänning — det skadar decodern.

---

## ⚡ Solenoidutgångar

Decodern tillhandahåller 8 dubbla utgångsblock, utformade för klassiska tvillingspol-växelmotorer.

Varje utgångsblock har:

- Två yttre skruvplintrar — för vänster och höger spole (A och B)
- En mittenplintt — för den gemensamma ledaren (COM), delad mellan de två spolarna

Denna layout låter dig:

- Driva upp till 8 tvillingspol-växelmotorer (t.ex. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Eller ansluta 3-tråds växelmotorer som MTB MP-1 direkt

Utgångarna är grupperade i par med tydlig A-, COM- och B-märkning.

![Solenoid-decoder med 8 tvillingspol-växelmotorer anslutna](image.png)

Även om decodern inte är utformad för signalstyrning kan den driva enkla tvåaspekts-signaler med samma utgångar.

![Kopplingsexempel för tvåaspekts-signal](image-1.png)

---

## 🔌 Reläutvidgning – Unifrog-polarisering

Denna utvidgning driver automatiskt hjärtpunkten på Unifrog-växlar med självlåsande reläer.

- Reläkortet består av fyra små reläenheter som kan separeras om du behöver färre än fyra.

![Låsande reläutvidgningskort](image-2.png)

- Reläerna låses av samma signal som används för att utlösa växelmotorn — ingen extra konfigurering behövs.
- Varje reläenhet växlar hjärtpunktspolariteten baserat på växelns riktning.

Med ett relä per växel hanterar denna utvidgning upp till 8 Unifrog-hjärtpunkter med två kort.

![Reläutvidgning monterad på decoder för Unifrog-koppling](image-3.png)

- Reläkortet kopplas direkt in i decorderns utvidgningshuvud, men kan också monteras separat nära växeln.

![Exempel på fjärrmonterad reläutvidgning](image-4.png)

Denna relämodul är också kompatibel med andra solenoid-decoders.

---

## ⚡ Reläutvidgning – Electrofrog-polarisering

Electrofrog-växlar kräver två reläkopplingar per växel:

1. En för att koppla bort hjärtpunkten innan växelmotorn kopplas om
2. En för att återansluta den med korrekt polaritet efteråt

Denna utvidgning hanterar den sekvensen automatiskt. Den består av fyra dubbla relämoduler, permanent länkade.

- Den kopplas in på decorderns vänstra sida (märkt för Electrofrog-användning).
- Varje relätpar är länkat till en solenoidutgång: utgång 1 → relätpar 1, utgång 2 → relätpar 2, osv.
- Dessa moduler kan inte separeras eftersom de delar spårström och intern logik.

Decodern har ett speciellt förinställningsläge som aktiverar Electrofrog-kopplingssekvensen.
Om hjärtpunktspolariteten är fel efter installationen, vänd jumprarna på relämodulen för att korrigera det — ingen omprogrammering behövs.

---

## ⚙️ Reläutvidgning – Öppen kontakt (generell användning)

För koppling av externa enheter (ljus, signaler, logikkretsar) med enkla reläkontakter:

- Varje enhet tillhandahåller ett dubbelkast (NO/NC)-relä, styrbart via DCC.
- Upp till 16 individuellt adresserbara reläkontakter vid fullständig bestyckning.
- Modulerna kopplas direkt in i decodern eller kan användas separat med kablar.
- Finns i en genomhålssversion för DIY och en kompakt SMD-version.

Precis som Unifrog-reläkorten kan dessa moduler separeras och återanvändas med andra DCC-solenoid-decoders.

![Generella relämoduler monterade på decodern](image-5.png)

![Detalj av generell relämodul](image-6.png)

Generell reläutvidgning kan också polarisera Electrofrog-växlar med lite mer kabeldragning:

- Använd NO (Normally Open)-kontakterna
- Loopa båda COM-kontakterna ihop och anslut dem till hjärtpunkten
- Anslut NO-kontakterna till spårströmsskena

![Electrofrog-koppling med generella relämoduler](image-7.png)

Om en hjärtpunkt hamnar med fel polaritet, byt de två spårströmsledarna (som visas för hjärtpunkt 4 i diagrammet ovan).

---

## 🧲 Avkopplare och andra induktiva laster

OS-Solenoid-Decoder kan driva avkopplare, elektromagneter och andra induktiva laster utöver växelmotorer.

- **Enkel pulsläge** (rekommenderat) — skickar en kort strömstöt, idealisk för fjäderbelastade eller tidskänsliga spoler
- **Enkel kontinuerlig läge** — håller utgången kontinuerligt på, användbart för monostabila reläer eller enkla PÅ/AV-enheter

![Kopplingsexempel för avkopplare](image-8.png)

⚠️ Avkopplare kan överhettas om de kopplas in för länge — kontrollera alltid databladet för ditt spårvarumärke och håll pulstiderna korta.

---

## ⚙️ Konfigurera OS-Solenoid-Decoder

Som standard arbetar decodern i normalt läge när strömmen slås på. Två LED:ar ger visuell återkoppling om vad som händer.

---

## 🔦 LED-beteende i driftläge

| LED-mönster | Läge |
|-------------|------|
| Båda LED:arna blinkar | Dubbel puls (standard) |
| En LED blinkar, en AV | Enkel puls |
| Båda LED:arna PÅ | Dubbel kontinuerlig |
| En LED PÅ | Enkel kontinuerlig |
| En LED PÅ + annan LED blinkar | Electrofrog-läge (dubbel puls + hjärtpunktrelä) |

När utgångar är konfigurerade med blandade typer förblir den vänstra LED:en PÅ och den högra LED:en blinkar en gång kontinuerligt för att indikera blandat konfigurationsläge.

---

## 🧰 Aktivera konfigurationsläge

För att aktivera konfigurationsläge:

1. Håll in konfigurationsknappen. Den högra LED:en börjar blinka:
   - 1 blink = Meny 1
   - 2 blinkningar = Meny 2
   - ... upp till Meny 5
2. Släpp knappen när LED:en når den meny du vill ha.

Väl i en meny:

- Den vänstra LED:en blinkar samma antal gånger som menynumret (t.ex. 3 blinkningar = Meny 3).
- Tryck på knappen igen för att avsluta menyn, om inte avsnittet nedan säger annat.

![Konfigurationsmeny-flödesschema](image-9.png)

---

## 🧠 Innan du börjar

Om du planerar att använda blandade utgångstyper (t.ex. Enkel kontinuerlig för reläer tillsammans med Dubbel puls för växelmotorer), planera dina utgångstilldelningar på papper först.

**Exempel:** om utgångarna 5–8 ska vara Enkel kontinuerlig (för 8 reläer) och utgångarna 1–4 ska vara Dubbel kontinuerlig (för växelmotorer) måste du:

1. Använda Meny 2 för att tilldela korrekta utgångstyper
2. Sedan använda Meny 1 för att tilldela DCC-adresser noggrant, eftersom enkla utgångar använder fler adresser

---

## 📖 Menyöversikt

| Meny | Funktion |
|------|----------|
| 1 | DCC-adresstilldelning |
| 2 | Val av utgångstyp |
| 3 | Pulstidskonfiguration |
| 4 | PWM-driftcykel |
| 5 | Globala inställningar och förinställningar |

---

## 🟠 Meny 1: DCC-adresstilldelning

Använd den här menyn för att tilldela DCC-adresser till varje utgång.

Regler:
- Dubbellägen använder 1 adress
- Enkellägen använder 2 adresser (A och B separat)

Om du tilldelar adress 20 till utgång 1 i enkelläge, kommer den att uppta adresserna 20 och 21. Utgång 2 startar då på 22. Decodern hanterar denna förskjutning automatiskt.

Val av utgångar:
- Skicka DCC-tillbehörsadress 1–8 för att välja en utgång.
- Skicka en andra adress för att tilldela den till den utgången.
- Skicka adress 9 som väljare för att använda samma adress på alla utgångar samtidigt.

I unikt adresseringsläge kan du ge varje utgång en anpassad adress inklusive upprepade eller hoppade nummer. Decodern återgår till driftläget omedelbart efter tilldelningen, om inte unikt läge är aktivt — i det fallet trycker du på konfigurationsknappen för att avsluta.

---

## 🟡 Meny 2: Val av utgångstyp

Varje utgång kan ställas in till en av följande typer:

| Typ-ID | Lägesbeskrivning |
|--------|-----------------|
| 1 | Dubbel puls (standard) |
| 2 | Dubbel kontinuerlig |
| 3 | Enkel puls |
| 4 | Enkel kontinuerlig |
| 5 | Dubbel puls med Electrofrog-relässtöd |

I Electrofrog-läge styr utgångarna 1–4 relätparen på utgångarna 8–5 i omvänd ordning (utgång 1 → relä 8, utgång 2 → relä 7, osv.).

Välj vilken utgång som ska konfigureras genom att skicka DCC-adress 1–8.

---

## 🔵 Meny 3: Pulstidskonfiguration

Finjustera pulstiden för varje utgång.

**Enkel puls-utgångar:**
- Tid anges i hela sekunder
- Adress 10 = 10 sekunder
- Intervall: 1–4096 sekunder
- Standard: 5 s

**Dubbel puls-utgångar:**
- Tid anges i steg om 10 ms
- Adress 1 = 10 ms
- Maximum: 40,9 s (4096 × 10 ms)
- Standard: 50 ms

Skicka adress 9 för att använda samma tid på alla utgångar samtidigt.

---

## 🟣 Meny 4: PWM-driftcykel

Tillgänglig för utgångar konfigurerade i kontinuerligt läge (Enkel eller Dubbel).

PWM minskar den genomsnittliga levererade effekten — idealisk för långsamma motorer som MTB MP-1.

- PWM-frekvens: 50 Hz
- Adress 10 = 100% driftcykel (standard; full effekt, ingen PWM)

| Adress | Driftcykel |
|--------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (standard) |

Skicka adress 9 för att använda samma driftcykel på alla utgångar.

---

## 🔘 Meny 5: Globala inställningar och förinställningar

**Förinställningar — ställ in alla utgångstyper på en gång:**

| Adress | Förinställningsläge |
|--------|---------------------|
| 1 | Dubbel puls (standard) |
| 2 | Dubbel kontinuerlig |
| 3 | Enkel puls |
| 4 | Enkel kontinuerlig |
| 5 | Dubbel puls med Electrofrog-läge |

**Speciella alternativ:**

| Adress | Inställning |
|--------|-------------|
| 20 | Inaktivera unika utgångsadresser (standard) |
| 21 | Aktivera unika utgångsadresser |
| 30 | Inaktivera DCC EXT-kommandostöd (standard) |
| 31 | Aktivera DCC EXT-pulslängdsstöd |
| 40 | Inaktivera lokfunktionsstyrning (standard) |
| 41 | Aktivera lokfunktioner (F1–F16, 1 adress) |
| 42 | Aktivera lokfunktioner (F1–F4, 2+ adresser) |
| 996 / 1000 | Inaktivera Roco 4-adressoffset (standard) |
| 997 / 1001 | Aktivera Roco 4-adressoffset |

---

## 📟 Lokfunktionsstyrning förklarad

Du kan styra decodern med lokfunktionstangenter (F1–F16) istället för DCC-tillbehörskommandon.

**Fördelar:**
- Fungerar med reglage som Roco Lokmaus 2
- Mycket snabb koppling — idealisk för snabb banstyning

**Lägen:**
- **F1–F16-läge:** använder 1 lokadress
- **F1–F4-läge:** använder 2 eller fler lokadresser (användbart för reglage som bara stöder F1–F4)

Den lokadressen som används matchar DCC-adressen tilldelad till utgång 1.

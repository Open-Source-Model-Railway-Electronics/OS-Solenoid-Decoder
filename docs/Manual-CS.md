> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; 🇨🇿 CS &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Úvod

OS-Solenoid-Decoder je jednoduchý, výkonný DCC příslušenský dekodér pro přepínání:

- Výhybek (pohony výhybek)
- Relé
- Odpojovačů
- Jakéhokoli jiného solenoidem řízeného zařízení

Zvládá zatížení až 5 ampér a podporuje téměř jakýkoli typ pohonu výhybky.
Lze jej také kombinovat s OS-relays pro polarizaci srdcovky u výhybek electrofrog i unifrog.

Tento dekodér je navržen jako:

- **Snadný na zapojení** — zásuvné šroubové svorky usnadňují předpřipravení a umožňují rychlé vyjmutí nebo výměnu
- **Snadný na konfiguraci** — používá pouze standardní DCC příslušenské příkazy; bez počítače, bez CV, bez POM
- **Modulární** — volitelné rozšiřující desky relé a tranzistorů
- **Robustní** — vestavěná ochrana proti přetížení

Ať stavíte velké kolejiště nebo chcete jen něco, co funguje bez potíží: tento dekodér je stvořen k tomu, aby splnil úkol.

---

## Obsah

- [Vlastnosti](#-vlastnosti)
- [Připojení dekodéru](#-připojení-dekodéru)
- [Napájení](#-napájení)
- [Solenoidové výstupy](#-solenoidové-výstupy)
- [Relé rozšíření – polarizace Unifrog](#-relé-rozšíření--polarizace-unifrog)
- [Relé rozšíření – polarizace Electrofrog](#-relé-rozšíření--polarizace-electrofrog)
- [Relé rozšíření – otevřený kontakt (víceúčelový)](#️-relé-rozšíření--otevřený-kontakt-víceúčelový)
- [Odpojovače a jiné indukční zátěže](#-odpojovače-a-jiné-indukční-zátěže)
- [Konfigurace OS-Solenoid-Decoder](#️-konfigurace-os-solenoid-decoder)
- [Chování LED v provozním režimu](#-chování-led-v-provozním-režimu)
- [Vstup do konfiguračního režimu](#-vstup-do-konfiguračního-režimu)
- [Než začnete](#-než-začnete)
- [Přehled menu](#-přehled-menu)
- [Menu 1: Přiřazení DCC adres](#-menu-1-přiřazení-dcc-adres)
- [Menu 2: Výběr typu výstupu](#-menu-2-výběr-typu-výstupu)
- [Menu 3: Konfigurace doby impulzu](#-menu-3-konfigurace-doby-impulzu)
- [Menu 4: Pracovní cyklus PWM](#-menu-4-pracovní-cyklus-pwm)
- [Menu 5: Globální nastavení a předvolby](#-menu-5-globální-nastavení-a-předvolby)
- [Vysvětlení ovládání lokomotivními funkcemi](#-vysvětlení-ovládání-lokomotivními-funkcemi)

---

## 🔧 Vlastnosti

- **Celkový výstupní proud až 5 A** — pohání výkonné solenoidy, relé nebo pohony výhybek bez externích zesilovačů
- **Zásuvné šroubové svorky** — usnadňují předpřipravení a umožňují rychlé vyjmutí nebo výměnu dekodéru
- **Více výstupních režimů:**
  - Dvojitý impulz (výchozí)
  - Jednoduchý impulz
  - Dvojitý trvalý
  - Jednoduchý trvalý
  - Dvojitý impulz s relé Electrofrog
- **Jeden výstup najednou** — dekodér přepíná vždy jeden výstupní pár, aby předešel přetížení
- **Volitelná podpora modulu CDU** — snižuje spotřebu energie a prodlužuje životnost pohonu výhybky
- **Detekce a ochrana proti přetížení** — výstupy jsou automaticky deaktivovány při detekci přetížení
- **Konfigurace pouze prostřednictvím DCC příkazů** — není potřeba programovací software ani hardware
- **Předdefinované konfigurační předvolby** — rychle přepněte všechny výstupy na impulzní, trvalý nebo electrofrog režim jediným DCC příkazem
- **Ovládání lokomotivními funkcemi** (F1–F16) — pro rychlé přepínání pomocí ovladačů jako Roco Lokmaus nebo Multimaus
- **Podpora Roco adresového offsetu** — vestavěná podpora pro Roco 4-adresový offset
- **Rozšiřitelné relé a tranzistorovými deskami:**
  - Dvojitý relé modul pro polarizaci výhybky electrofrog
  - Jednoduché aretační relé pro přepínání polarity unifrog
  - Relé moduly s otevřeným kontaktem pro víceúčelové DCC relé ovládání
  - Tranzistorový budič pro dvouvodičové pohony výhybek

---

## 🔌 Připojení dekodéru

OS-Solenoid-Decoder se řídí přehledným a konzistentním schématem zapojení. Napájení je připojeno nahoře, výstupy jsou na obou stranách.

---

## 🔋 Napájení

- Připojte kolejové napětí DCC nebo DC napájení (max. 19 V) k dekodéru.
- Jak DCC signál, tak napájecí vodiče se připojují z horní strany dekodéru.
- ⚠️ Nepoužívejte AC napětí — poškodí dekodér.

---

## ⚡ Solenoidové výstupy

Dekodér poskytuje 8 dvojitých výstupních bloků navržených pro klasické dvousmyčkové pohony výhybek.

Každý výstupní blok má:

- Dvě vnější šroubové svorky — pro levou a pravou cívku (A a B)
- Jednu středovou svorku — pro společný vodič (COM), sdílený mezi oběma cívkami

Toto schéma umožňuje:

- Pohánět až 8 dvousmyčkových pohonů výhybek (např. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Nebo přímo připojit 3-vodičové pohony výhybek jako MTB MP-1

Výstupy jsou seskupeny v párech s jasným označením A, COM a B.

![Solenoidový dekodér s 8 připojenými dvousmyčkovými pohony výhybek](image.png)

Ačkoli dekodér není navržen pro ovládání návěstidel, může pohánět jednoduché dvouaspektové návěstidla pomocí stejných výstupů.

![Příklad zapojení dvouaspektového návěstidla](image-1.png)

---

## 🔌 Relé rozšíření – polarizace Unifrog

Toto rozšíření automaticky napájí srdcovku výhybek unifrog pomocí samoaretačních relé.

- Relé deska se skládá ze čtyř malých relé jednotek, které lze odlomit, pokud potřebujete méně než čtyři.

![Aretační relé rozšiřující deska](image-2.png)

- Relé jsou aretována stejným signálem, který spouští pohon výhybky — není potřeba žádná extra konfigurace.
- Každá relé jednotka přepíná polaritu srdcovky podle směru výhybky.

S jedním relé na výhybku toto rozšíření zvládá až 8 srdcovek unifrog pomocí dvou desek.

![Relé rozšíření namontované na dekodér pro zapojení unifrog](image-3.png)

- Relé deska se přímo zapojuje do rozšiřovacího záhlaví dekodéru, ale lze ji také namontovat vzdáleně poblíž výhybky.

![Příklad vzdáleně namontovaného relé rozšíření](image-4.png)

Tento relé modul je také kompatibilní s jinými solenoidovými dekodéry.

---

## ⚡ Relé rozšíření – polarizace Electrofrog

Výhybky Electrofrog vyžadují dvě relé spínací operace na výhybku:

1. Jedno pro odpojení srdcovky před přehozením pohonu výhybky
2. Jedno pro opětovné připojení se správnou polaritou poté

Toto rozšíření zpracovává tuto sekvenci automaticky. Skládá se ze čtyř dvojitých relé modulů, trvale propojených.

- Zapojuje se do levé strany dekodéru (označené pro použití s electrofrog).
- Každý pár relé je propojen s jedním solenoidovým výstupem: výstup 1 → pár relé 1, výstup 2 → pár relé 2 atd.
- Tyto moduly nelze oddělovat, protože sdílejí kolejové napájení a interní logiku.

Dekodér má speciální předvolbu, která aktivuje přepínací sekvenci electrofrog.
Pokud je polarita srdcovky po instalaci nesprávná, obraťte přepínače na relé modulu pro opravu — není potřeba žádné přeprogramování.

---

## ⚙️ Relé rozšíření – otevřený kontakt (víceúčelový)

Pro přepínání externích zařízení (světla, návěstidla, logické obvody) pomocí prostých relé kontaktů:

- Každá jednotka poskytuje přepínací (NO/NC) relé, ovládatelné přes DCC.
- Až 16 individuálně adresovatelných relé kontaktů při plném osazení.
- Moduly se přímo zapojují do dekodéru nebo lze je použít vzdáleně s vodiči.
- Dostupné ve verzi s průchozím montáží pro kutily a v kompaktní verzi SMD.

Stejně jako relé desky unifrog lze tyto moduly odlomit a znovu použít s jinými DCC solenoidovými dekodéry.

![Víceúčelové relé moduly namontované na dekodér](image-5.png)

![Detail víceúčelového relé modulu](image-6.png)

Víceúčelové relé rozšíření může také polarizovat výhybky electrofrog s mírně složitějším zapojením:

- Použijte kontakty NO (Normally Open)
- Propojte oba kontakty COM dohromady a připojte je ke srdcovce
- Připojte kontakty NO k napájecím kolejnicím

![Zapojení electrofrog pomocí víceúčelových relé modulů](image-7.png)

Pokud má srdcovka nesprávnou polaritu, prohoďte dva napájecí vodiče kolejnic (jak je znázorněno pro srdcovku 4 ve výše uvedeném schématu).

---

## 🧲 Odpojovače a jiné indukční zátěže

OS-Solenoid-Decoder může pohánět odpojovače, elektromagnety a jiné indukční zátěže kromě pohonů výhybek.

- **Režim jednoduchého impulzu** (doporučeno) — vysílá krátký proud, ideální pro cívky s pružinou nebo časově citlivé cívky
- **Režim jednoduchého trvalého** — udržuje výstup trvale zapnutý, užitečné pro monostabilní relé nebo jednoduché ZAP/VYP zařízení

![Příklad zapojení odpojovače](image-8.png)

⚠️ Odpojovače se mohou přehřát při příliš dlouhém přepnutí — vždy kontrolujte datový list pro vaši značku koleje a udržujte dobu impulzu krátkou.

---

## ⚙️ Konfigurace OS-Solenoid-Decoder

Ve výchozím stavu dekodér pracuje v normálním režimu při zapnutí. Dvě LED poskytují vizuální zpětnou vazbu o tom, co se děje.

---

## 🔦 Chování LED v provozním režimu

| Vzor LED | Režim |
|-------------|------|
| Obě LED blikají | Dvojitý impulz (výchozí) |
| Jedna LED bliká, druhá ZHASNUTÁ | Jednoduchý impulz |
| Obě LED SVÍTÍ | Dvojitý trvalý |
| Jedna LED SVÍTÍ | Jednoduchý trvalý |
| Jedna LED SVÍTÍ + druhá LED bliká | Režim Electrofrog (dvojitý impulz + relé srdcovky) |

Pokud jsou výstupy nakonfigurovány se smíšenými typy, levá LED zůstane SVÍTIT a pravá LED bude nepřetržitě jednou blikat, aby indikovala smíšený konfigurační režim.

---

## 🧰 Vstup do konfiguračního režimu

Pro vstup do konfiguračního režimu:

1. Podržte konfigurační tlačítko. Pravá LED začne blikat:
   - 1 bliknutí = Menu 1
   - 2 bliknutí = Menu 2
   - ... až do Menu 5
2. Uvolněte tlačítko, když LED dosáhne požadovaného menu.

Po vstupu do menu:

- Levá LED bliká stejný počet bliknutí jako číslo menu (např. 3 bliknutí = Menu 3).
- Stiskněte tlačítko znovu pro ukončení menu, pokud níže uvedená sekce neříká jinak.

![Vývojový diagram konfiguračního menu](image-9.png)

---

## 🧠 Než začnete

Pokud plánujete používat smíšené typy výstupů (např. Jednoduchý trvalý pro relé vedle Dvojitého impulzu pro pohony výhybek), naplánujte si přiřazení výstupů nejprve na papíře.

**Příklad:** pokud výstupy 5–8 mají být Jednoduchý trvalý (pro 8 relé) a výstupy 1–4 mají být Dvojitý trvalý (pro pohony výhybek), musíte:

1. Použít Menu 2 pro přiřazení správných typů výstupů
2. Poté použít Menu 1 pro pečlivé přiřazení DCC adres, protože jednoduché výstupy používají více adres

---

## 📖 Přehled menu

| Menu | Funkce |
|------|----------|
| 1 | Přiřazení DCC adres |
| 2 | Výběr typu výstupu |
| 3 | Konfigurace doby impulzu |
| 4 | Pracovní cyklus PWM |
| 5 | Globální nastavení a předvolby |

---

## 🟠 Menu 1: Přiřazení DCC adres

Toto menu slouží k přiřazení DCC adres každému výstupu.

Pravidla:
- Dvojité režimy používají 1 adresu
- Jednoduché režimy používají 2 adresy (A a B samostatně)

Pokud přiřadíte adresu 20 k výstupu 1 v jednoduchém režimu, zabere adresy 20 a 21. Výstup 2 pak začne na adrese 22. Dekodér toto posouvání zpracovává automaticky.

Výběr výstupů:
- Odešlete DCC příslušenskou adresu 1–8 pro výběr výstupu.
- Odešlete druhou adresu pro přiřazení k danému výstupu.
- Odešlete adresu 9 jako volič pro okamžité použití stejné adresy na všechny výstupy.

V režimu jedinečného adresování můžete přiřadit každému výstupu vlastní adresu včetně opakovaných nebo přeskočených čísel. Dekodér se okamžitě vrátí do provozního režimu po přiřazení, pokud není aktivní jedinečný režim — v tom případě stiskněte konfigurační tlačítko pro ukončení.

---

## 🟡 Menu 2: Výběr typu výstupu

Každý výstup lze nastavit na jeden z následujících typů:

| ID typu | Popis režimu |
|---------|-----------------|
| 1 | Dvojitý impulz (výchozí) |
| 2 | Dvojitý trvalý |
| 3 | Jednoduchý impulz |
| 4 | Jednoduchý trvalý |
| 5 | Dvojitý impulz s podporou relé Electrofrog |

V režimu Electrofrog ovládají výstupy 1–4 páry relé na výstupech 8–5 v opačném pořadí (výstup 1 → relé 8, výstup 2 → relé 7 atd.).

Vyberte výstup ke konfiguraci odesláním DCC adresy 1–8.

---

## 🔵 Menu 3: Konfigurace doby impulzu

Doladění doby impulzu pro každý výstup.

**Výstupy s jednoduchým impulzem:**
- Čas se nastavuje v celých sekundách
- Adresa 10 = 10 sekund
- Rozsah: 1–4096 sekund
- Výchozí: 5 s

**Výstupy s dvojitým impulzem:**
- Čas se nastavuje v krocích po 10 ms
- Adresa 1 = 10 ms
- Maximum: 40,9 s (4096 × 10 ms)
- Výchozí: 50 ms

Odešlete adresu 9 pro okamžité použití stejného času na všechny výstupy.

---

## 🟣 Menu 4: Pracovní cyklus PWM

Dostupné pro výstupy nakonfigurované v trvalém režimu (jednoduchém nebo dvojitém).

PWM snižuje průměrný dodávaný výkon — ideální pro pomalé motory jako MTB MP-1.

- Frekvence PWM: 50 Hz
- Adresa 10 = 100% pracovní cyklus (výchozí; plný výkon, bez PWM)

| Adresa | Pracovní cyklus |
|---------|-----------|
| 1 | 10 % |
| 2 | 20 % |
| ... | ... |
| 10 | 100 % (výchozí) |

Odešlete adresu 9 pro použití stejného pracovního cyklu na všechny výstupy.

---

## 🔘 Menu 5: Globální nastavení a předvolby

**Předvolby — nastavení všech typů výstupů najednou:**

| Adresa | Předvolba |
|---------|------------|
| 1 | Dvojitý impulz (výchozí) |
| 2 | Dvojitý trvalý |
| 3 | Jednoduchý impulz |
| 4 | Jednoduchý trvalý |
| 5 | Dvojitý impulz s režimem Electrofrog |

**Speciální možnosti:**

| Adresa | Nastavení |
|---------|---------|
| 20 | Zakázat jedinečné adresy výstupů (výchozí) |
| 21 | Povolit jedinečné adresy výstupů |
| 30 | Zakázat podporu příkazů DCC EXT (výchozí) |
| 31 | Povolit podporu délky impulzu DCC EXT |
| 40 | Zakázat ovládání lokomotivními funkcemi (výchozí) |
| 41 | Povolit lokomotivní funkce (F1–F16, 1 adresa) |
| 42 | Povolit lokomotivní funkce (F1–F4, 2+ adresy) |
| 996 / 1000 | Zakázat Roco 4-adresový offset (výchozí) |
| 997 / 1001 | Povolit Roco 4-adresový offset |

---

## 📟 Vysvětlení ovládání lokomotivními funkcemi

Dekodér lze ovládat pomocí funkčních kláves lokomotivy (F1–F16) místo DCC příslušenských příkazů.

**Výhody:**
- Funguje s ovladači jako Roco Lokmaus 2
- Velmi rychlé přepínání — ideální pro rychlé ovládání kolejiště

**Režimy:**
- **Režim F1–F16:** používá 1 adresu lokomotivy
- **Režim F1–F4:** používá 2 nebo více adres lokomotivy (užitečné pro ovladače, které podporují pouze F1–F4)

Použitá adresa lokomotivy odpovídá DCC adrese přiřazené k výstupu 1.

> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; 🇭🇺 HU &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Bevezetés

Az OS-Solenoid-Decoder egy egyszerű, erőteljes DCC kiegészítő dekóder a következők kapcsolásához:

- Kitérők (kitérőmotorok)
- Relék
- Lekapcsolók
- Bármely más szolonoid vezérelt eszköz

Legfeljebb 5 amperes terhelést képes kezelni, és szinte bármilyen kitérőmotort támogat.
OS-relékkel kombinálva is használható az electrofrog és unifrog kitérők szárpolarizálásához.

Ez a dekóder a következőkre lett tervezve:

- **Könnyen bekötni** — dugaszolható csavartalpas csatlakozók teszik egyszerűvé az előzetes huzalozást, és teszik lehetővé a dekóder gyors eltávolítását vagy cseréjét
- **Könnyen konfigurálni** — csak szabványos DCC kiegészítő parancsokat használ; nincs szükség számítógépre, CV-re, POM-ra
- **Moduláris** — opcionális relés és tranzisztoros bővítőlapok
- **Megbízható** — beépített túlterhelési védelem

Legyen szó nagy pályáról, vagy csak valami gondűző megoldásról: ez a dekóder elvégzi a munkát.

---

## Tartalomjegyzék

- [Jellemzők](#-jellemzők)
- [A Dekóder Csatlakoztatása](#-a-dekóder-csatlakoztatása)
- [Tápellátás](#-tápellátás)
- [Szolonoid Kimenetek](#-szolonoid-kimenetek)
- [Relébővítő – Unifrog Polarizálás](#-relébővítő--unifrog-polarizálás)
- [Relébővítő – Electrofrog Polarizálás](#-relébővítő--electrofrog-polarizálás)
- [Relébővítő – Nyitott Kontaktus (Általános Célú)](#️-relébővítő--nyitott-kontaktus-általános-célú)
- [Lekapcsolók és Egyéb Induktív Terhelések](#-lekapcsolók-és-egyéb-induktív-terhelések)
- [Az OS-Solenoid-Decoder Konfigurálása](#️-az-os-solenoid-decoder-konfigurálása)
- [LED Viselkedés Üzemi Módban](#-led-viselkedés-üzemi-módban)
- [Belépés Konfigurációs Módba](#-belépés-konfigurációs-módba)
- [Kezdés Előtt](#-kezdés-előtt)
- [Menü Áttekintés](#-menü-áttekintés)
- [1. Menü: DCC Cím Hozzárendelés](#-1-menü-dcc-cím-hozzárendelés)
- [2. Menü: Kimenet Típus Kiválasztás](#-2-menü-kimenet-típus-kiválasztás)
- [3. Menü: Impulzusidő Konfiguráció](#-3-menü-impulzusidő-konfiguráció)
- [4. Menü: PWM Kitöltési Tényező](#-4-menü-pwm-kitöltési-tényező)
- [5. Menü: Globális Beállítások és Előbeállítások](#-5-menü-globális-beállítások-és-előbeállítások)
- [Mozdony Funkcióvezérlés Magyarázata](#-mozdony-funkcióvezérlés-magyarázata)

---

## 🔧 Jellemzők

- **Összesen legfeljebb 5 A kimeneti áram** — nehéz szolonoidokat, reléket vagy kitérőmotorokat hajt meg külső erősítők nélkül
- **Dugaszolható csavartalpas csatlakozók** — egyszerűvé teszik az előzetes bekötést, és lehetővé teszik a dekóder gyors eltávolítását vagy cseréjét
- **Többféle kimeneti mód:**
  - Dupla Impulzus (alapértelmezett)
  - Egyes Impulzus
  - Dupla Folyamatos
  - Egyes Folyamatos
  - Dupla Impulzus Electrofrog Reléval
- **Egyszerre egy kimenet** — a dekóder egyszerre csak egy kimenetpárt kapcsol a túlterhelés elkerülése érdekében
- **Opcionális CDU modul támogatás** — csökkenti az energiafelhasználást és meghosszabbítja a kitérőmotor élettartamát
- **Túlterhelés-érzékelés és -védelem** — a kimenetek automatikusan letiltódnak túlterhelés esetén
- **Konfiguráció kizárólag DCC parancsokkal** — nincs szükség programozó szoftverre vagy hardverre
- **Előre definiált konfigurációs előbeállítások** — egyetlen DCC paranccsal gyorsan átváltható az összes kimenet impulzus, folyamatos vagy electrofrog módba
- **Mozdony funkcióvezérlés** (F1–F16) — gyors kapcsoláshoz olyan szabályozókkal, mint a Roco Lokmaus vagy Multimaus
- **Roco cím eltolás támogatás** — beépített támogatás a Roco 4-es cím eltoláshoz
- **Relés és tranzisztoros lapokkal bővíthető:**
  - Dupla relés modul electrofrog kitérő polarizálásához
  - Egyes reteszelő relé unifrog polaritásváltáshoz
  - Nyitott kontaktusú relés modulok általános célú DCC relévezérléshez
  - Tranzisztoros meghajtó modul kétvezetékes kitérőmotorokhoz

---

## 🔌 A Dekóder Csatlakoztatása

Az OS-Solenoid-Decoder áttekinthető és következetes bekötési elrendezést követ. A tápellátás felülről csatlakozik, a kimenetek mindkét oldalon találhatók.

---

## 🔋 Tápellátás

- Csatlakoztass DCC sínfeszültséget vagy DC tápellátást (max. 19 V) a dekóderhez.
- Mind a DCC jel, mind a tápvezetékek a dekóder felső oldaláról csatlakoznak.
- ⚠️ Ne használj AC feszültséget — ez megrongálja a dekódert.

---

## ⚡ Szolonoid Kimenetek

A dekóder 8 dupla kimeneti blokkot biztosít, klasszikus ikertekercsű kitérőmotorokhoz tervezve.

Minden kimeneti blokk tartalmaz:

- Két külső csavartalpas csatlakozót — a bal és jobb tekercshez (A és B)
- Egy középső csatlakozót — a közös vezetékhez (COM), amelyet a két tekercs oszt

Ez az elrendezés lehetővé teszi:

- Legfeljebb 8 ikertekercsű kitérőmotor meghajtását (pl. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Vagy háromvezetékes kitérőmotorok, mint a MTB MP-1, közvetlen csatlakoztatását

A kimenetek páronként csoportosítva, egyértelmű A, COM és B feliratokkal vannak jelölve.

![Szolonoid dekóder 8 bekötött ikertekercsű kitérőmotorral](image.png)

Bár a dekóder nem jelzővezérlésre lett tervezve, egyszerű kétaspektusú jelzőket is meghajthat ugyanezeken a kimeneteken.

![Kétaspektusú jelző bekötési példa](image-1.png)

---

## 🔌 Relébővítő – Unifrog Polarizálás

Ez a bővítő automatikusan táplálja az unifrog kitérők szárát önreteszelő relék segítségével.

- A relélap négy kis relés egységből áll, amelyek szétcsattogthatók, ha négynél kevesebbre van szükség.

![Reteszelő relés bővítőlap](image-2.png)

- A reléket ugyanaz a jel reteszeli, amely a kitérőmotort is kiváltja — nincs szükség extra konfigurációra.
- Minden relés egység a kitérő irányától függően kapcsolja a szárpolaritást.

Kitérőnként egy relével ez a bővítő két lappal legfeljebb 8 unifrog szárat kezel.

![Dekóderhez szerelt relébővítő unifrog bekötéshez](image-3.png)

- A relélap közvetlenül bedugható a dekóder bővítőfejébe, de a kitérő közelében távolabb is szerelhető.

![Távolra szerelt relébővítő példa](image-4.png)

Ez a relés modul más szolonoid dekóderekkel is kompatibilis.

---

## ⚡ Relébővítő – Electrofrog Polarizálás

Az electrofrog kitérők kitérőnként két relékapcsolást igényelnek:

1. Egyet a szár leválasztásához a kitérőmotor kapcsolása előtt
2. Egyet a helyes polaritással való újracsatlakoztatáshoz utána

Ez a bővítő automatikusan kezeli ezt a sorrendet. Négy dupla relés modulból áll, amelyek állandóan össze vannak kötve.

- A dekóder bal oldalába dugható (electrofrog használathoz jelölve).
- Minden relépar egy szolonoid kimenethez van kötve: 1. kimenet → 1. relépar, 2. kimenet → 2. relépar stb.
- Ezek a modulok nem választhatók szét, mivel közös sínáramot és belső logikát osztanak.

A dekódernek van egy speciális előbeállítás módja, amely aktiválja az electrofrog kapcsolási sorrendet.
Ha telepítés után a szárpolaritás rossz, fordítsd meg a relés lapon lévő jumpereket a javításhoz — nincs szükség újraprogramozásra.

---

## ⚙️ Relébővítő – Nyitott Kontaktus (Általános Célú)

Külső eszközök (fények, jelzők, logikai áramkörök) egyszerű relékontaktusokkal való kapcsolásához:

- Minden egység egy átváltó (NO/NC) relét biztosít, DCC-n keresztül vezérelve.
- Legfeljebb 16 egyedileg megszámozható relékontaktus, ha teljesen felszerelt.
- A modulok közvetlenül bedughatók a dekóderbe, vagy távolabb is használhatók vezetékekkel.
- Átmenő lyukú (THT) barkácsverziókban és kompakt SMD kivitelben is elérhető.

Az unifrog relés lapokhoz hasonlóan ezek a modulok szétcsattogthatók és más DCC szolonoid dekóderekkel is újra felhasználhatók.

![Általános célú relés modulok a dekóderre szerelve](image-5.png)

![Általános célú relés modul részlete](image-6.png)

Az általános célú relébővítő valamivel több bekötéssel electrofrog kitérőket is polarizálhat:

- Használd a NO (normálisan nyitott) kontaktusokat
- Kösd össze mindkét COM kontaktust, és csatlakoztasd a szárhoz
- Csatlakoztasd a NO kontaktusokat a sínáram sínekhez

![Electrofrog bekötés általános célú relés modulokkal](image-7.png)

Ha egy szár rossz polaritásba kerül, cseréld fel a két sínáram vonalat (ahogyan a fenti ábrán a 4. szárnál látható).

---

## 🧲 Lekapcsolók és Egyéb Induktív Terhelések

Az OS-Solenoid-Decoder lekapcsolókat, elektromágneseket és egyéb induktív terheléseket is meghajthat kitérőmotorokon kívül.

- **Egyes Impulzus mód** (ajánlott) — rövid áramlökést küld, rugós vagy időérzékeny tekercsekhez ideális
- **Egyes Folyamatos mód** — folyamatosan tartja a kimenetet bekapcsolva, monostabil relékhez vagy egyszerű BE/KI eszközökhöz hasznos

![Lekapcsoló bekötési példa](image-8.png)

⚠️ A lekapcsolók túlhevülhetnek, ha túl sokáig kapcsolnak — mindig ellenőrizd a sínmárka adatlapját, és tartsd rövidre az impulzusidőket.

---

## ⚙️ Az OS-Solenoid-Decoder Konfigurálása

Alapértelmezés szerint a dekóder normál módban indul bekapcsoláskor. Két LED nyújt vizuális visszajelzést a történésekről.

---

## 🔦 LED Viselkedés Üzemi Módban

| LED Minta | Mód |
|-------------|------|
| Mindkét LED villog | Dupla Impulzus (alapértelmezett) |
| Egy LED villog, egy KI | Egyes Impulzus |
| Mindkét LED BE | Dupla Folyamatos |
| Egy LED BE | Egyes Folyamatos |
| Egy LED BE + másik LED villog | Electrofrog Mód (dupla impulzus + szárrelé) |

Ha a kimenetek vegyes típusra vannak konfigurálva, a bal LED folyamatosan BE marad, a jobb LED pedig egyszer villog folyamatosan, jelezve a vegyes konfigurációs módot.

---

## 🧰 Belépés Konfigurációs Módba

A konfigurációs módba lépéshez:

1. Tartsd nyomva a konfigurációs gombot. A jobb LED villogni kezd:
   - 1 villanás = 1. Menü
   - 2 villanás = 2. Menü
   - ... egészen az 5. Menüig
2. Engedd el a gombot, amikor a LED eléri a kívánt menüt.

Ha egy menüben vagy:

- A bal LED annyiszor villog, ahány a menüszám (pl. 3 villanás = 3. Menü).
- A menüből való kilépéshez nyomj rá újra a gombra, hacsak az alábbi szakasz mást nem mond.

![Konfigurációs menü folyamatábra](image-9.png)

---

## 🧠 Kezdés Előtt

Ha vegyes kimenet típusokat tervezel használni (pl. Egyes Folyamatos relékhez a Dupla Impulzus mellett kitérőmotorokhoz), előbb papíron tervezd meg a kimenetek kiosztását.

**Példa:** ha az 5–8. kimeneteknek Egyes Folyamatosnak kell lenniük (8 reléhez), az 1–4. kimeneteknek pedig Dupla Folyamatosnak (kitérőmotorokhoz), akkor:

1. Használd a 2. Menüt a helyes kimenet típusok hozzárendeléséhez
2. Majd a 1. Menüvel gondosan rendeld hozzá a DCC-címeket, mert az egyes kimenetek több címet használnak

---

## 📖 Menü Áttekintés

| Menü | Funkció |
|------|----------|
| 1 | DCC Cím Hozzárendelés |
| 2 | Kimenet Típus Kiválasztás |
| 3 | Impulzusidő Konfiguráció |
| 4 | PWM Kitöltési Tényező |
| 5 | Globális Beállítások és Előbeállítások |

---

## 🟠 1. Menü: DCC Cím Hozzárendelés

Ezzel a menüvel rendelhetsz DCC-címeket minden kimenethez.

Szabályok:
- Dupla módok 1 címet használnak
- Egyes módok 2 címet használnak (A és B külön)

Ha a 20-as címet rendeled az 1. kimenethez Egyes módban, az elfoglalja a 20-as és 21-es címeket. A 2. kimenet ekkor a 22-vel kezd. A dekóder ezt az eltolást automatikusan kezeli.

Kimenetek kiválasztása:
- Küldj 1–8 DCC kiegészítő címet egy kimenet kiválasztásához.
- Küldj egy második címet, hogy hozzárendeld ahhoz a kimenethez.
- Küldj 9-es címet szelektorként, hogy ugyanazt a címet alkalmazza az összes kimenetre egyszerre.

Egyedi cím üzemmódban minden kimenethez egyéni cím adható, beleértve az ismétléseket vagy kihagyott számokat. A dekóder azonnal visszatér az üzemi módba a hozzárendelés után, kivéve ha egyedi mód aktív — ebben az esetben nyomj konfig gombot a kilépéshez.

---

## 🟡 2. Menü: Kimenet Típus Kiválasztás

Minden kimenet a következő típusok egyikére állítható:

| Típus azonosító | Mód leírása |
|---------|-----------------|
| 1 | Dupla Impulzus (alapértelmezett) |
| 2 | Dupla Folyamatos |
| 3 | Egyes Impulzus |
| 4 | Egyes Folyamatos |
| 5 | Dupla Impulzus Electrofrog relé támogatással |

Electrofrog módban az 1–4. kimenetek a fordított sorrendű 8–5. kimenetek reléparjait vezérlik (1. kimenet → 8. relé, 2. kimenet → 7. relé stb.).

Válaszd ki, melyik kimenetet konfigurálod, az 1–8 DCC cím küldésével.

---

## 🔵 3. Menü: Impulzusidő Konfiguráció

Az impulzusidő finomhangolása minden kimenethez.

**Egyes Impulzus kimenetek:**
- Az idő egész másodpercekben van megadva
- 10-es cím = 10 másodperc
- Tartomány: 1–4096 másodperc
- Alapértelmezett: 5 s

**Dupla Impulzus kimenetek:**
- Az idő 10 ms lépésekben van megadva
- 1-es cím = 10 ms
- Maximum: 40,9 s (4096 × 10 ms)
- Alapértelmezett: 50 ms

Küldd a 9-es címet, hogy ugyanazt az időt alkalmazza az összes kimenetre egyszerre.

---

## 🟣 4. Menü: PWM Kitöltési Tényező

Elérhető a Folyamatos módra konfigurált kimenetekhez (Egyes vagy Dupla).

A PWM csökkenti az átlagos leadott teljesítményt — ideális lassú motorokhoz, mint a MTB MP-1.

- PWM frekvencia: 50 Hz
- 10-es cím = 100% kitöltési tényező (alapértelmezett; teljes teljesítmény, nincs PWM)

| Cím | Kitöltési tényező |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (alapértelmezett) |

Küldd a 9-es címet, hogy ugyanazt a kitöltési tényezőt alkalmazza az összes kimenetre.

---

## 🔘 5. Menü: Globális Beállítások és Előbeállítások

**Előbeállítások — az összes kimenet típusának egyszerre való beállítása:**

| Cím | Előbeállítás mód |
|---------|------------|
| 1 | Dupla Impulzus (alapértelmezett) |
| 2 | Dupla Folyamatos |
| 3 | Egyes Impulzus |
| 4 | Egyes Folyamatos |
| 5 | Dupla Impulzus Electrofrog móddal |

**Speciális opciók:**

| Cím | Beállítás |
|---------|---------|
| 20 | Egyedi kimenet címek letiltása (alapértelmezett) |
| 21 | Egyedi kimenet címek engedélyezése |
| 30 | DCC EXT parancs támogatás letiltása (alapértelmezett) |
| 31 | DCC EXT impulzushossz támogatás engedélyezése |
| 40 | Mozdony funkcióvezérlés letiltása (alapértelmezett) |
| 41 | Mozdony funkciók engedélyezése (F1–F16, 1 cím) |
| 42 | Mozdony funkciók engedélyezése (F1–F4, 2+ cím) |
| 996 / 1000 | Roco 4-es cím eltolás letiltása (alapértelmezett) |
| 997 / 1001 | Roco 4-es cím eltolás engedélyezése |

---

## 📟 Mozdony Funkcióvezérlés Magyarázata

A dekódert DCC kiegészítő parancsok helyett mozdony funkciógombokkal (F1–F16) is vezérelheted.

**Előnyök:**
- Olyan szabályozókkal is működik, mint a Roco Lokmaus 2
- Nagyon gyors kapcsolás — ideális gyors pályavezérléshez

**Módok:**
- **F1–F16 mód:** 1 mozdony címet használ
- **F1–F4 mód:** 2 vagy több mozdony címet használ (hasznos, ha a szabályozó csak F1–F4-et támogat)

A használt mozdony cím megegyezik az 1. kimenethez hozzárendelt DCC-címmel.

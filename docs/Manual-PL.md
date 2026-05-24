> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; 🇵🇱 PL &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Wprowadzenie

OS-Solenoid-Decoder to prosty, wydajny dekoder akcesoriów DCC do przełączania:

- Zwrotnic (silników zwrotnicowych)
- Przekaźników
- Odsprzęglaczy
- Dowolnych innych urządzeń napędzanych solenoidem

Obsługuje obciążenia do 5 A i współpracuje niemal z każdym typem silnika zwrotnicy.
Może być również używany w połączeniu z OS-relays do obsługi polaryzacji sercówek zarówno dla zwrotnic electrofrog, jak i unifrog.

Ten dekoder został zaprojektowany tak, aby był:

- **Łatwy do okablowania** — wtykowe zaciski śrubowe ułatwiają wstępne okablowanie i umożliwiają szybkie usunięcie lub wymianę
- **Łatwy do konfiguracji** — używa wyłącznie standardowych poleceń akcesoriów DCC; bez komputera, bez CV, bez POM
- **Modułowy** — opcjonalne płytki rozszerzeń przekaźnikowych i tranzystorowych
- **Niezawodny** — wbudowane zabezpieczenie przed przeciążeniem

Niezależnie od tego, czy budujesz duże makietę, czy po prostu chcesz czegoś, co działa bez problemów: ten dekoder jest stworzony do pracy.

---

## Spis treści

- [Właściwości](#-właściwości)
- [Podłączenie dekodera](#-podłączenie-dekodera)
- [Zasilanie](#-zasilanie)
- [Wyjścia solenoidowe](#-wyjścia-solenoidowe)
- [Rozszerzenie przekaźnikowe — polaryzacja Unifrog](#-rozszerzenie-przekaźnikowe--polaryzacja-unifrog)
- [Rozszerzenie przekaźnikowe — polaryzacja Electrofrog](#-rozszerzenie-przekaźnikowe--polaryzacja-electrofrog)
- [Rozszerzenie przekaźnikowe — otwarty styk (ogólnego przeznaczenia)](#️-rozszerzenie-przekaźnikowe--otwarty-styk-ogólnego-przeznaczenia)
- [Odsprzęglacze i inne obciążenia indukcyjne](#-odsprzęglacze-i-inne-obciążenia-indukcyjne)
- [Konfiguracja OS-Solenoid-Decoder](#️-konfiguracja-os-solenoid-decoder)
- [Zachowanie LED w trybie pracy](#-zachowanie-led-w-trybie-pracy)
- [Wchodzenie w tryb konfiguracji](#-wchodzenie-w-tryb-konfiguracji)
- [Przed rozpoczęciem](#-przed-rozpoczęciem)
- [Przegląd menu](#-przegląd-menu)
- [Menu 1: Przypisywanie adresów DCC](#-menu-1-przypisywanie-adresów-dcc)
- [Menu 2: Wybór typu wyjścia](#-menu-2-wybór-typu-wyjścia)
- [Menu 3: Konfiguracja czasu impulsu](#-menu-3-konfiguracja-czasu-impulsu)
- [Menu 4: Wypełnienie PWM](#-menu-4-wypełnienie-pwm)
- [Menu 5: Ustawienia globalne i szablony](#-menu-5-ustawienia-globalne-i-szablony)
- [Wyjaśnienie sterowania funkcjami lokomotywy](#-wyjaśnienie-sterowania-funkcjami-lokomotywy)

---

## 🔧 Właściwości

- **Do 5 A całkowitego prądu wyjściowego** — napędza wydajne solenoidów, przekaźniki lub silniki zwrotnicowe bez zewnętrznych wzmacniaczy
- **Wtykowe zaciski śrubowe** — ułatwiają wstępne okablowanie i umożliwiają szybkie usunięcie lub wymianę dekodera
- **Wiele trybów wyjściowych:**
  - Double Pulse (domyślnie)
  - Single Pulse
  - Double Steady
  - Single Steady
  - Double Pulse z przekaźnikiem Electrofrog
- **Jedno wyjście na raz** — dekoder przełącza jedną parę wyjść na raz, aby zapobiec przeciążeniu
- **Opcjonalna obsługa modułu CDU** — zmniejsza zużycie energii i wydłuża żywotność silnika zwrotnicy
- **Wykrywanie i ochrona przed przeciążeniem** — wyjścia są automatycznie wyłączane po wykryciu przeciążenia
- **Konfiguracja wyłącznie przez polecenia DCC** — nie jest wymagane oprogramowanie ani sprzęt do programowania
- **Predefiniowane szablony konfiguracyjne** — szybkie przełączenie wszystkich wyjść w tryb impulsowy, ciągły lub electrofrog jednym poleceniem DCC
- **Sterowanie funkcjami lokomotywy** (F1–F16) — do szybkiego przełączania za pomocą regulatorów takich jak Roco Lokmaus lub Multimaus
- **Obsługa przesunięcia adresu Roco** — wbudowana obsługa przesunięcia o 4 adresy Roco
- **Rozszerzalne o płytki przekaźnikowe i tranzystorowe:**
  - Podwójny moduł przekaźnikowy do polaryzacji sercówek zwrotnic electrofrog
  - Pojedynczy przekaźnik zatrzaskowy do przełączania biegunowości unifrog
  - Moduły przekaźnikowe z otwartym stykiem do ogólnego sterowania przekaźnikami DCC
  - Moduł sterownika tranzystorowego do dwuprzewodowych silników zwrotnicowych

---

## 🔌 Podłączenie dekodera

OS-Solenoid-Decoder ma przejrzysty i spójny schemat okablowania. Zasilanie jest podłączone od góry, wyjścia są po obu stronach.

---

## 🔋 Zasilanie

- Podłącz napięcie torowe DCC lub zasilacz DC (maks. 19 V) do dekodera.
- Zarówno sygnał DCC, jak i linie zasilające są podłączone od górnej strony dekodera.
- ⚠️ Nie używaj napięcia AC — uszkodzi to dekoder.

---

## ⚡ Wyjścia solenoidowe

Dekoder zapewnia 8 podwójnych bloków wyjściowych, zaprojektowanych dla klasycznych silników zwrotnicowych z podwójną cewką.

Każdy blok wyjściowy ma:

- Dwa zewnętrzne zaciski śrubowe — dla lewej i prawej cewki (A i B)
- Jeden centralny zacisk — dla wspólnego przewodu (COM), współdzielonego przez obie cewki

Ten układ umożliwia:

- Napędzanie do 8 silników zwrotnicowych z podwójną cewką (np. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Lub bezpośrednie podłączenie 3-przewodowych silników zwrotnicowych, takich jak MTB MP-1

Wyjścia są pogrupowane w pary z wyraźnym oznakowaniem A, COM i B.

![Dekoder solenoidowy z podłączonymi 8 silnikami zwrotnicowymi z podwójną cewką](image.png)

Choć dekoder nie jest przeznaczony do sterowania semaforami, może napędzać proste sygnały dwuaspektowe przy użyciu tych samych wyjść.

![Przykład okablowania sygnału dwuaspektowego](image-1.png)

---

## 🔌 Rozszerzenie przekaźnikowe — polaryzacja Unifrog

To rozszerzenie automatycznie zasila sercówkę zwrotnic unifrog za pomocą przekaźników samoczynnie zatrzaskujących.

- Płytka przekaźnikowa składa się z czterech małych jednostek przekaźnikowych, które można rozdzielić, jeśli potrzebujesz mniej niż czterech.

![Płytka rozszerzenia z przekaźnikiem zatrzaskowym](image-2.png)

- Przekaźniki są zatrzaskiwane tym samym sygnałem używanym do wyzwalania silnika zwrotnicy — nie jest potrzebna dodatkowa konfiguracja.
- Każda jednostka przekaźnikowa przełącza biegunowość sercówki zgodnie z kierunkiem zwrotnicy.

Z jednym przekaźnikiem na zwrotnicę to rozszerzenie obsługuje do 8 sercówek unifrog przy użyciu dwóch płytek.

![Rozszerzenie przekaźnikowe zamontowane na dekoderze do okablowania unifrog](image-3.png)

- Płytka przekaźnikowa podłącza się bezpośrednio do nagłówka rozszerzenia dekodera, ale może być również montowana zdalnie, blisko zwrotnicy.

![Przykład zdalnie zamontowanego rozszerzenia przekaźnikowego](image-4.png)

Ten moduł przekaźnikowy jest również kompatybilny z innymi dekoderami solenoidowymi.

---

## ⚡ Rozszerzenie przekaźnikowe — polaryzacja Electrofrog

Zwrotnice electrofrog wymagają dwóch przełączeń przekaźnikowych na zwrotnicę:

1. Jednego, aby odłączyć sercówkę przed przełączeniem silnika zwrotnicy
2. Jednego, aby ponownie podłączyć ją z prawidłową biegunowością

To rozszerzenie obsługuje tę sekwencję automatycznie. Składa się z czterech podwójnych modułów przekaźnikowych, trwale połączonych.

- Podłącza się do lewej strony dekodera (oznaczonej do użytku electrofrog).
- Każda para przekaźników jest połączona z jednym wyjściem solenoidowym: wyjście 1 → para przekaźników 1, wyjście 2 → para przekaźników 2 itd.
- Tych modułów nie można rozdzielać, ponieważ współdzielą zasilanie torowe i logikę wewnętrzną.

Dekoder ma specjalny tryb szablonu, który aktywuje sekwencję przełączania electrofrog.
Jeśli biegunowość sercówki jest nieprawidłowa po instalacji, przełącz zworki na module przekaźnikowym, aby ją skorygować — nie jest wymagane przeprogramowanie.

---

## ⚙️ Rozszerzenie przekaźnikowe — otwarty styk (ogólnego przeznaczenia)

Do przełączania zewnętrznych urządzeń (oświetlenie, semafory, układy logiczne) przy użyciu zwykłych styków przekaźnikowych:

- Każda jednostka zapewnia przekaźnik przełączający (NO/NC), sterowany przez DCC.
- Do 16 indywidualnie adresowalnych styków przekaźnikowych przy pełnym zaludnieniu.
- Moduły podłączają się bezpośrednio do dekodera lub mogą być używane zdalnie z przewodami.
- Dostępne w wersji DIY THT i kompaktowej wersji SMD.

Podobnie jak płytki przekaźnikowe unifrog, moduły te można rozdzielać i ponownie używać z innymi dekoderami solenoidowymi DCC.

![Moduły przekaźnikowe ogólnego przeznaczenia zamontowane na dekoderze](image-5.png)

![Szczegół modułu przekaźnikowego ogólnego przeznaczenia](image-6.png)

Rozszerzenie przekaźnikowe ogólnego przeznaczenia może również polaryzować zwrotnice electrofrog przy nieco większym okablowaniu:

- Użyj styków NO (Normalnie Otwartych)
- Połącz oba zaciski COM razem i podłącz je do sercówki
- Podłącz zaciski NO do przewodów zasilania torowego

![Okablowanie electrofrog przy użyciu modułów przekaźnikowych ogólnego przeznaczenia](image-7.png)

Jeśli sercówka ma nieprawidłową biegunowość, zamień dwa przewody zasilania torowego (jak pokazano dla sercówki 4 na powyższym schemacie).

---

## 🧲 Odsprzęglacze i inne obciążenia indukcyjne

OS-Solenoid-Decoder może napędzać odsprzęglacze, elektromagnesy i inne obciążenia indukcyjne oprócz silników zwrotnicowych.

- **Tryb Single Pulse** (zalecany) — wysyła krótki impuls prądowy, idealny dla cewek sprężynowych lub czułych na czas
- **Tryb Single Steady** — utrzymuje wyjście ciągle włączone, przydatne dla przekaźników monostabilnych lub prostych urządzeń WŁ/WYŁ

![Przykład okablowania odsprzęglacza](image-8.png)

⚠️ Odsprzęglacze mogą się przegrzać, jeśli są przełączane zbyt długo — zawsze sprawdzaj dokumentację techniczną swojej marki toru i utrzymuj krótkie czasy impulsu.

---

## ⚙️ Konfiguracja OS-Solenoid-Decoder

Domyślnie dekoder pracuje w trybie normalnym po włączeniu zasilania. Dwie LED zapewniają wizualną informację zwrotną o tym, co się dzieje.

---

## 🔦 Zachowanie LED w trybie pracy

| Wzorzec LED | Tryb |
|-------------|------|
| Oba LED migają | Double Pulse (domyślnie) |
| Jeden LED miga, jeden WYŁ | Single Pulse |
| Oba LED WŁ | Double Steady |
| Jeden LED WŁ | Single Steady |
| Jeden LED WŁ + drugi LED miga | Tryb Electrofrog (double pulse + przekaźnik sercówki) |

Gdy wyjścia są skonfigurowane w mieszanych typach, lewy LED pozostaje WŁ, a prawy LED miga raz ciąggle, wskazując tryb konfiguracji mieszanej.

---

## 🧰 Wchodzenie w tryb konfiguracji

Aby wejść w tryb konfiguracji:

1. Przytrzymaj przycisk konfiguracji. Prawy LED zaczyna migać:
   - 1 mignięcie = Menu 1
   - 2 mignięcia = Menu 2
   - ... do Menu 5
2. Zwolnij przycisk, gdy LED osiągnie wybrane menu.

Po wejściu w menu:

- Lewy LED miga tyle razy, ile wynosi numer menu (np. 3 mignięcia = Menu 3).
- Naciśnij ponownie przycisk, aby wyjść z menu, chyba że poniższy rozdział mówi inaczej.

![Schemat blokowy menu konfiguracji](image-9.png)

---

## 🧠 Przed rozpoczęciem

Jeśli planujesz używać mieszanych typów wyjść (np. Single Steady dla przekaźników i Double Pulse dla silników zwrotnicowych), najpierw zaplanuj przypisania wyjść na papierze.

**Przykład:** jeśli wyjścia 5–8 mają być Single Steady (dla 8 przekaźników), a wyjścia 1–4 mają być Double Steady (dla silników zwrotnicowych), musisz:

1. Użyć Menu 2, aby przypisać prawidłowe typy wyjść
2. Następnie użyć Menu 1, aby ostrożnie przypisać adresy DCC, ponieważ wyjścia pojedyncze używają więcej adresów

---

## 📖 Przegląd menu

| Menu | Funkcja |
|------|----------|
| 1 | Przypisywanie adresów DCC |
| 2 | Wybór typu wyjścia |
| 3 | Konfiguracja czasu impulsu |
| 4 | Wypełnienie PWM |
| 5 | Ustawienia globalne i szablony |

---

## 🟠 Menu 1: Przypisywanie adresów DCC

Użyj tego menu, aby przypisać adresy DCC do każdego wyjścia.

Zasady:
- Tryby podwójne używają 1 adresu
- Tryby pojedyncze używają 2 adresów (A i B oddzielnie)

Jeśli przypisasz adres 20 do Wyjścia 1 w trybie pojedynczym, zajmie on adresy 20 i 21. Wyjście 2 zacznie się od 22. Dekoder obsługuje to przesunięcie automatycznie.

Wybieranie wyjść:
- Wyślij adres akcesoriów DCC 1–8, aby wybrać wyjście.
- Wyślij drugi adres, aby przypisać go do tego wyjścia.
- Wyślij adres 9 jako selektor, aby jednocześnie zastosować ten sam adres do wszystkich wyjść.

W trybie unikalnego adresowania możesz nadać każdemu wyjściu własny adres, w tym powtórzone lub pomijane numery. Dekoder powraca do trybu pracy natychmiast po przypisaniu, chyba że aktywny jest tryb unikalny — w takim przypadku naciśnij przycisk konfiguracji, aby wyjść.

---

## 🟡 Menu 2: Wybór typu wyjścia

Każde wyjście można ustawić na jeden z następujących typów:

| ID typu | Opis trybu |
|---------|-----------------|
| 1 | Double Pulse (domyślnie) |
| 2 | Double Steady |
| 3 | Single Pulse |
| 4 | Single Steady |
| 5 | Double Pulse z obsługą przekaźnika Electrofrog |

W trybie Electrofrog wyjścia 1–4 sterują parami przekaźników na wyjściach 8–5 w odwrotnej kolejności (wyjście 1 → przekaźnik 8, wyjście 2 → przekaźnik 7 itd.).

Wybierz wyjście do skonfigurowania, wysyłając adres DCC 1–8.

---

## 🔵 Menu 3: Konfiguracja czasu impulsu

Dostosuj czas impulsu dla każdego wyjścia.

**Wyjścia Single Pulse:**
- Czas jest ustawiany w całych sekundach
- Adres 10 = 10 sekund
- Zakres: 1–4096 sekund
- Domyślnie: 5 s

**Wyjścia Double Pulse:**
- Czas jest ustawiany w krokach co 10 ms
- Adres 1 = 10 ms
- Maksimum: 40,9 s (4096 × 10 ms)
- Domyślnie: 50 ms

Wyślij adres 9, aby zastosować ten sam czas do wszystkich wyjść jednocześnie.

---

## 🟣 Menu 4: Wypełnienie PWM

Dostępne dla wyjść skonfigurowanych w trybie Steady (Single lub Double).

PWM zmniejsza średnią dostarczaną moc — idealne dla wolnych silników, takich jak MTB MP-1.

- Częstotliwość PWM: 50 Hz
- Adres 10 = 100% wypełnienia (domyślnie; pełna moc, brak PWM)

| Adres | Wypełnienie |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (domyślnie) |

Wyślij adres 9, aby zastosować to samo wypełnienie do wszystkich wyjść.

---

## 🔘 Menu 5: Ustawienia globalne i szablony

**Szablony — ustaw wszystkie typy wyjść jednocześnie:**

| Adres | Tryb szablonu |
|---------|------------|
| 1 | Double Pulse (domyślnie) |
| 2 | Double Steady |
| 3 | Single Pulse |
| 4 | Single Steady |
| 5 | Double Pulse z trybem Electrofrog |

**Opcje specjalne:**

| Adres | Ustawienie |
|---------|---------|
| 20 | Wyłącz unikalne adresy wyjść (domyślnie) |
| 21 | Włącz unikalne adresy wyjść |
| 30 | Wyłącz obsługę poleceń DCC EXT (domyślnie) |
| 31 | Włącz obsługę długości impulsu DCC EXT |
| 40 | Wyłącz sterowanie funkcjami lokomotywy (domyślnie) |
| 41 | Włącz funkcje lokomotywy (F1–F16, 1 adres) |
| 42 | Włącz funkcje lokomotywy (F1–F4, 2+ adresów) |
| 996 / 1000 | Wyłącz przesunięcie o 4 adresy Roco (domyślnie) |
| 997 / 1001 | Włącz przesunięcie o 4 adresy Roco |

---

## 📟 Wyjaśnienie sterowania funkcjami lokomotywy

Możesz sterować dekoderem za pomocą klawiszy funkcji lokomotywy (F1–F16) zamiast poleceń akcesoriów DCC.

**Zalety:**
- Działa z regulatorami takimi jak Roco Lokmaus 2
- Bardzo szybkie przełączanie — idealne do szybkiego sterowania makietą

**Tryby:**
- **Tryb F1–F16:** używa 1 adresu lokomotywy
- **Tryb F1–F4:** używa 2 lub więcej adresów lokomotywy (przydatne dla regulatorów obsługujących tylko F1–F4)

Używany adres lokomotywy odpowiada adresowi DCC przypisanemu do Wyjścia 1.

> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; 🇩🇪 DE &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Einführung

Der OS-Solenoid-Decoder ist ein einfacher, leistungsstarker DCC-Zubehördecoder zum Schalten von:

- Weichen (Weichenmotoren)
- Relais
- Entkupplern
- Allen anderen magnetartikelgetriebenen Geräten

Er kann Lasten von bis zu 5 A bewältigen und unterstützt nahezu jeden Typ von Weichenmotor.
Er kann auch in Kombination mit OS-Relais zur Herzstück-Polarisierung für Electrofrog- und Unifrog-Weichen verwendet werden.

Dieser Decoder wurde so konzipiert, dass er:

- **Einfach zu verkabeln** — steckbare Schraubklemmen erleichtern die Vorverdrahtung und ermöglichen ein schnelles Entfernen oder Ersetzen
- **Einfach zu konfigurieren** — verwendet ausschließlich Standard-DCC-Zubehörbefehle; kein Computer, kein CV, kein POM
- **Modular** — optionale Relais- und Transistor-Erweiterungsplatinen
- **Robust** — eingebauter Überlastschutz

ist. Ob beim Aufbau einer großen Anlage oder einfach, wenn etwas problemlos funktionieren soll: Dieser Decoder wurde gemacht, um die Aufgabe zu erledigen.

---

## Inhaltsverzeichnis

- [Merkmale](#-merkmale)
- [Anschließen des Decoders](#-anschließen-des-decoders)
- [Stromversorgung](#-stromversorgung)
- [Magnetartikelausgänge](#-magnetartikelausgänge)
- [Relaiserweiterung – Unifrog-Polarisierung](#-relaiserweiterung--unifrog-polarisierung)
- [Relaiserweiterung – Electrofrog-Polarisierung](#-relaiserweiterung--electrofrog-polarisierung)
- [Relaiserweiterung – Offener Kontakt (Universal)](#️-relaiserweiterung--offener-kontakt-universal)
- [Entkuppler und andere induktive Lasten](#-entkuppler-und-andere-induktive-lasten)
- [Konfigurieren des OS-Solenoid-Decoders](#️-konfigurieren-des-os-solenoid-decoders)
- [LED-Verhalten im Betriebsmodus](#-led-verhalten-im-betriebsmodus)
- [Aufrufen des Konfigurationsmodus](#-aufrufen-des-konfigurationsmodus)
- [Bevor du beginnst](#-bevor-du-beginnst)
- [Menüübersicht](#-menüübersicht)
- [Menü 1: DCC-Adresszuweisung](#-menü-1-dcc-adresszuweisung)
- [Menü 2: Ausgangstyp-Auswahl](#-menü-2-ausgangstyp-auswahl)
- [Menü 3: Impulszeitkonfiguration](#-menü-3-impulszeitkonfiguration)
- [Menü 4: PWM-Tastverhältnis](#-menü-4-pwm-tastverhältnis)
- [Menü 5: Globale Einstellungen & Voreinstellungen](#-menü-5-globale-einstellungen--voreinstellungen)
- [Lokfunktionssteuerung erklärt](#-lokfunktionssteuerung-erklärt)

---

## 🔧 Merkmale

- **Bis zu 5 A Gesamtausgangsstrom** — treibt schwere Magnetartikel, Relais oder Weichenmotoren ohne externe Booster an
- **Steckbare Schraubklemmen** — erleichtern die Vorverdrahtung und ermöglichen ein schnelles Entfernen oder Ersetzen des Decoders
- **Mehrere Ausgangsmodi:**
  - Doppelimpuls (Standard)
  - Einzelimpuls
  - Doppeldauerbetrieb
  - Einzeldauerbetrieb
  - Doppelimpuls mit Electrofrog-Relais
- **Jeweils ein Ausgang** — der Decoder schaltet jeweils ein Ausgangs paar, um Überlast zu verhindern
- **Optionale CDU-Modul-Unterstützung** — reduziert den Stromverbrauch und verlängert die Lebensdauer des Weichenmotors
- **Überlasterkennung und -schutz** — Ausgänge werden automatisch deaktiviert, wenn eine Überlast erkannt wird
- **Konfiguration ausschließlich über DCC-Befehle** — keine Programmiersoftware oder Hardware erforderlich
- **Vordefinierte Konfigurationsvoreinstellungen** — alle Ausgänge mit einem einzigen DCC-Befehl schnell auf Impuls-, Dauer- oder Electrofrog-Modus umschalten
- **Lokfunktionssteuerung** (F1–F16) — für schnelles Schalten über Fahrgeräte wie Roco Lokmaus oder Multimaus
- **Roco-Adress-Offset-Unterstützung** — eingebaute Unterstützung für den Roco 4-Adress-Offset
- **Erweiterbar mit Relais- und Transistorplatinen:**
  - Doppelrelaismodul für Electrofrog-Weichen-Polarisierung
  - Einzelnes bistabiles Relais für Unifrog-Polaritätsumschaltung
  - Offene-Kontakt-Relaismodule für allgemeine DCC-Relaissteuerung
  - Transistortreibermodul für 2-Draht-Weichenmotoren

---

## 🔌 Anschließen des Decoders

Der OS-Solenoid-Decoder folgt einem klaren und einheitlichen Verdrahtungsschema. Die Stromversorgung wird oben angeschlossen, die Ausgänge befinden sich auf beiden Seiten.

---

## 🔋 Stromversorgung

- Entweder DCC-Gleisspannung oder eine DC-Stromversorgung (max. 19 V) an den Decoder anschließen.
- Sowohl das DCC-Signal als auch die Stromleitungen werden von der oberen Seite des Decoders angeschlossen.
- ⚠️ Keine Wechselspannung verwenden — dies beschädigt den Decoder.

---

## ⚡ Magnetartikelausgänge

Der Decoder stellt 8 doppelte Ausgangsblöcke bereit, die für klassische Doppelspulen-Weichenmotoren ausgelegt sind.

Jeder Ausgangsblock hat:

- Zwei äußere Schraubklemmen — für die linke und rechte Spule (A und B)
- Eine mittlere Klemme — für den Gemeinsamdraht (COM), der zwischen beiden Spulen geteilt wird

Dieses Layout ermöglicht:

- Den Antrieb von bis zu 8 Doppelspulen-Weichenmotoren (z. B. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Oder den direkten Anschluss von 3-Draht-Weichenmotoren wie dem MTB MP-1

Ausgänge sind in Paaren mit klarer A-, COM- und B-Beschriftung gruppiert.

![Magnetartikeldecoder mit 8 angeschlossenen Doppelspulen-Weichenmotoren](image.png)

Obwohl der Decoder nicht für die Signalsteuerung konzipiert ist, kann er einfache Zweibegriff-Signale über dieselben Ausgänge ansteuern.

![Verdrahtungsbeispiel für Zweibegriff-Signal](image-1.png)

---

## 🔌 Relaiserweiterung – Unifrog-Polarisierung

Diese Erweiterung versorgt das Herzstück von Unifrog-Weichen automatisch über selbsthaltende Relais.

- Die Relaisplatine besteht aus vier kleinen Relaiseinheiten, die bei Bedarf auseinandergebrochen werden können, wenn weniger als vier benötigt werden.

![Bistabile Relaiserweiterungsplatine](image-2.png)

- Die Relais werden durch dasselbe Signal gerastet, das den Weichenmotor auslöst — keine zusätzliche Konfiguration erforderlich.
- Jede Relaiseinheit schaltet die Herzstück-Polarität entsprechend der Weichenrichtung.

Mit einem Relais pro Weiche bewältigt diese Erweiterung bis zu 8 Unifrog-Herzstücke mit zwei Platinen.

![An Decoder montierte Relaiserweiterung für Unifrog-Verdrahtung](image-3.png)

- Die Relaisplatine wird direkt in den Erweiterungsanschluss des Decoders eingesteckt, kann aber auch entfernt in der Nähe der Weiche montiert werden.

![Beispiel für entfernt montierte Relaiserweiterung](image-4.png)

Dieses Relaismodul ist auch mit anderen Magnetartikeldecoder kompatibel.

---

## ⚡ Relaiserweiterung – Electrofrog-Polarisierung

Electrofrog-Weichen benötigen zwei Relaisschalter pro Weiche:

1. Eines, um das Herzstück vor dem Schalten des Weichenmotors zu trennen
2. Eines, um es anschließend mit der richtigen Polarität wieder anzuschließen

Diese Erweiterung behandelt diese Sequenz automatisch. Sie besteht aus vier dauerhaft verbundenen Doppelrelaismodulen.

- Sie wird in die linke Seite des Decoders eingesteckt (für Electrofrog-Nutzung gekennzeichnet).
- Jedes Relaispaar ist mit einem Magnetartikelausgang verbunden: Ausgang 1 → Relaispaar 1, Ausgang 2 → Relaispaar 2, usw.
- Diese Module können nicht getrennt werden, da sie Gleisstrom und interne Logik teilen.

Der Decoder verfügt über einen speziellen Voreinstellungsmodus, der die Electrofrog-Schaltsequenz aktiviert.
Falls die Herzstück-Polarität nach der Installation falsch ist, die Jumper auf dem Relaismodul umstecken, um sie zu korrigieren — kein Umprogrammieren erforderlich.

---

## ⚙️ Relaiserweiterung – Offener Kontakt (Universal)

Zum Schalten externer Geräte (Beleuchtung, Signale, Logikschaltungen) über einfache Relaiskontakte:

- Jede Einheit bietet ein Wechselrelais (NO/NC), steuerbar über DCC.
- Bis zu 16 individuell adressierbare Relaiskontakte bei vollständiger Bestückung.
- Die Module werden direkt in den Decoder eingesteckt oder können über Kabel entfernt verwendet werden.
- Erhältlich in einer Durchsteckmontage-DIY-Version und einer kompakten SMD-Version.

Wie die Unifrog-Relaisplatinen können diese Module auseinandergebrochen und mit anderen DCC-Magnetartikeldecoder wiederverwendet werden.

![Universalrelaismodule am Decoder montiert](image-5.png)

![Universalrelaismodul-Detail](image-6.png)

Die Universalrelais-Erweiterung kann Electrofrog-Weichen auch mit etwas mehr Verdrahtungsaufwand polarisieren:

- Die NO-Kontakte (Normalerweise offen) verwenden
- Beide COM-Kontakte zusammenführen und mit dem Herzstück verbinden
- Die NO-Kontakte mit den Gleisstromschienen verbinden

![Electrofrog-Verdrahtung mit Universalrelaismodulen](image-7.png)

Falls ein Herzstück mit falscher Polarität endet, die beiden Gleisstromanschlüsse tauschen (wie für Herzstück 4 im obigen Diagramm gezeigt).

---

## 🧲 Entkuppler und andere induktive Lasten

Der OS-Solenoid-Decoder kann neben Weichenmotoren auch Entkuppler, Elektromagnete und andere induktive Lasten ansteuern.

- **Einzelimpuls-Modus** (empfohlen) — sendet einen kurzen Stromstoß, ideal für federgespannte oder zeitkritische Spulen
- **Einzeldauerbetrieb-Modus** — hält den Ausgang kontinuierlich ein, nützlich für monostabile Relais oder einfache EIN/AUS-Geräte

![Entkuppler-Verdrahtungsbeispiel](image-8.png)

⚠️ Entkuppler können überhitzen, wenn sie zu lange geschaltet werden — stets das Datenblatt des jeweiligen Gleisherstellers prüfen und Impulszeiten kurz halten.

---

## ⚙️ Konfigurieren des OS-Solenoid-Decoders

Standardmäßig arbeitet der Decoder im Normalbetrieb, wenn er mit Strom versorgt wird. Zwei LEDs geben visuelles Feedback über den aktuellen Zustand.

---

## 🔦 LED-Verhalten im Betriebsmodus

| LED-Muster | Modus |
|-------------|------|
| Beide LEDs blinken | Doppelimpuls (Standard) |
| Eine LED blinkt, eine AUS | Einzelimpuls |
| Beide LEDs EIN | Doppeldauerbetrieb |
| Eine LED EIN | Einzeldauerbetrieb |
| Eine LED EIN + andere LED blinkt | Electrofrog-Modus (Doppelimpuls + Frog-Relais) |

Wenn Ausgänge mit gemischten Typen konfiguriert sind, bleibt die linke LED EIN und die rechte LED blinkt einmal kontinuierlich, um den gemischten Konfigurationsmodus anzuzeigen.

---

## 🧰 Aufrufen des Konfigurationsmodus

So wird der Konfigurationsmodus aufgerufen:

1. Konfigurationstaste gedrückt halten. Die rechte LED beginnt zu blinken:
   - 1 Blinken = Menü 1
   - 2 Blinken = Menü 2
   - ... bis zu Menü 5
2. Taste loslassen, wenn die LED das gewünschte Menü erreicht.

Sobald in einem Menü:

- Die linke LED blinkt so oft wie die Menünummer (z. B. 3 Blinken = Menü 3).
- Die Taste erneut drücken, um das Menü zu verlassen, sofern der folgende Abschnitt nichts anderes angibt.

![Konfigurationsmenü-Flussdiagramm](image-9.png)

---

## 🧠 Bevor du beginnst

Falls gemischte Ausgangstypen geplant sind (z. B. Einzeldauerbetrieb für Relais neben Doppelimpuls für Weichenmotoren), die Ausgangszuweisungen zuerst auf Papier planen.

**Beispiel:** Wenn die Ausgänge 5–8 Einzeldauerbetrieb (für 8 Relais) und die Ausgänge 1–4 Doppeldauerbetrieb (für Weichenmotoren) sein sollen, müssen folgende Schritte durchgeführt werden:

1. Menü 2 verwenden, um die korrekten Ausgangstypen zuzuweisen
2. Dann Menü 1 verwenden, um DCC-Adressen sorgfältig zuzuweisen, da Einzelausgänge mehr Adressen verwenden

---

## 📖 Menüübersicht

| Menü | Funktion |
|------|----------|
| 1 | DCC-Adresszuweisung |
| 2 | Ausgangstyp-Auswahl |
| 3 | Impulszeitkonfiguration |
| 4 | PWM-Tastverhältnis |
| 5 | Globale Einstellungen & Voreinstellungen |

---

## 🟠 Menü 1: DCC-Adresszuweisung

Dieses Menü verwenden, um jedem Ausgang DCC-Adressen zuzuweisen.

Regeln:
- Doppelmodi verwenden 1 Adresse
- Einzelmodi verwenden 2 Adressen (A und B separat)

Wenn Adresse 20 Ausgang 1 im Einzelmodus zugewiesen wird, belegt sie die Adressen 20 und 21. Ausgang 2 beginnt dann bei 22. Der Decoder behandelt diese Verschiebung automatisch.

Ausgänge auswählen:
- DCC-Zubehöradresse 1–8 senden, um einen Ausgang auszuwählen.
- Eine zweite Adresse senden, um diese dem Ausgang zuzuweisen.
- Adresse 9 als Selektor senden, um dieselbe Adresse auf alle Ausgänge gleichzeitig anzuwenden.

Im einzigartigen Adressierungsmodus kann jedem Ausgang eine benutzerdefinierte Adresse einschließlich wiederholter oder ausgelassener Nummern zugewiesen werden. Der Decoder kehrt unmittelbar nach der Zuweisung zum Betriebsmodus zurück, es sei denn, der einzigartige Modus ist aktiv — in diesem Fall die Konfigurationstaste drücken, um zu beenden.

---

## 🟡 Menü 2: Ausgangstyp-Auswahl

Jeder Ausgang kann auf einen der folgenden Typen eingestellt werden:

| Typ-ID | Modusbezeichnung |
|---------|-----------------|
| 1 | Doppelimpuls (Standard) |
| 2 | Doppeldauerbetrieb |
| 3 | Einzelimpuls |
| 4 | Einzeldauerbetrieb |
| 5 | Doppelimpuls mit Electrofrog-Relais-Unterstützung |

Im Electrofrog-Modus steuern die Ausgänge 1–4 die Relaispaare an den Ausgängen 8–5 in umgekehrter Reihenfolge (Ausgang 1 → Relais 8, Ausgang 2 → Relais 7, usw.).

Den zu konfigurierenden Ausgang durch Senden von DCC-Adresse 1–8 auswählen.

---

## 🔵 Menü 3: Impulszeitkonfiguration

Die Impulszeit für jeden Ausgang feinabstimmen.

**Einzelimpuls-Ausgänge:**
- Zeit wird in ganzen Sekunden eingestellt
- Adresse 10 = 10 Sekunden
- Bereich: 1–4096 Sekunden
- Standard: 5 s

**Doppelimpuls-Ausgänge:**
- Zeit wird in 10 ms-Schritten eingestellt
- Adresse 1 = 10 ms
- Maximum: 40,9 s (4096 × 10 ms)
- Standard: 50 ms

Adresse 9 senden, um dieselbe Zeit auf alle Ausgänge gleichzeitig anzuwenden.

---

## 🟣 Menü 4: PWM-Tastverhältnis

Verfügbar für Ausgänge, die im Dauerbetrieb (Einzel oder Doppel) konfiguriert sind.

PWM reduziert die durchschnittlich gelieferte Leistung — ideal für langsame Motoren wie den MTB MP-1.

- PWM-Frequenz: 50 Hz
- Adresse 10 = 100% Tastverhältnis (Standard; volle Leistung, kein PWM)

| Adresse | Tastverhältnis |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (Standard) |

Adresse 9 senden, um dasselbe Tastverhältnis auf alle Ausgänge anzuwenden.

---

## 🔘 Menü 5: Globale Einstellungen & Voreinstellungen

**Voreinstellungen — alle Ausgangstypen auf einmal einstellen:**

| Adresse | Voreinstellungsmodus |
|---------|------------|
| 1 | Doppelimpuls (Standard) |
| 2 | Doppeldauerbetrieb |
| 3 | Einzelimpuls |
| 4 | Einzeldauerbetrieb |
| 5 | Doppelimpuls mit Electrofrog-Modus |

**Spezielle Optionen:**

| Adresse | Einstellung |
|---------|---------|
| 20 | Einzigartige Ausgangsadressen deaktivieren (Standard) |
| 21 | Einzigartige Ausgangsadressen aktivieren |
| 30 | DCC EXT-Befehlsunterstützung deaktivieren (Standard) |
| 31 | DCC EXT-Impulslängen-Unterstützung aktivieren |
| 40 | Lokfunktionssteuerung deaktivieren (Standard) |
| 41 | Lokfunktionen aktivieren (F1–F16, 1 Adresse) |
| 42 | Lokfunktionen aktivieren (F1–F4, 2+ Adressen) |
| 996 / 1000 | Roco 4-Adress-Offset deaktivieren (Standard) |
| 997 / 1001 | Roco 4-Adress-Offset aktivieren |

---

## 📟 Lokfunktionssteuerung erklärt

Der Decoder kann über Lokfunktionstasten (F1–F16) anstelle von DCC-Zubehörbefehlen gesteuert werden.

**Vorteile:**
- Funktioniert mit Fahrgeräten wie der Roco Lokmaus 2
- Sehr schnelles Schalten — ideal für schnelle Anlagensteuerung

**Modi:**
- **F1–F16-Modus:** verwendet 1 Lokadresse
- **F1–F4-Modus:** verwendet 2 oder mehr Lokadressen (nützlich für Fahrgeräte, die nur F1–F4 unterstützen)

Die verwendete Lokadresse entspricht der DCC-Adresse, die Ausgang 1 zugewiesen ist.

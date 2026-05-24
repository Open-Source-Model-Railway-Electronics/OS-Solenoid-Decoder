> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; [🇫🇷 FR](Manual-FR.md) &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; 🇮🇹 IT &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Introduzione

L'OS-Solenoid-Decoder è un decoder DCC per accessori semplice e potente per la commutazione di:

- Scambi (motori di scambio)
- Relè
- Disaccoppiatori
- Qualsiasi altro dispositivo a solenoide

È in grado di gestire carichi fino a 5 A e supporta quasi tutti i tipi di motori di scambio.
Può essere utilizzato anche in combinazione con i moduli OS-relays per gestire la polarizzazione del frog sia per scambi Electrofrog che Unifrog.

Questo decoder è progettato per essere:

- **Facile da cablare** — i morsetti a vite innestabili semplificano la pre-installazione e consentono una rapida rimozione o sostituzione
- **Facile da configurare** — utilizza solo comandi DCC standard per accessori; nessun computer, nessun CV, nessun POM
- **Modulare** — schede di espansione opzionali per relè e transistor
- **Robusto** — protezione integrata contro il sovraccarico

Che si stia costruendo un grande plastico o si voglia semplicemente qualcosa che funzioni senza problemi: questo decoder è fatto per portare a termine il lavoro.

---

## Indice

- [Caratteristiche](#-caratteristiche)
- [Collegamento del Decoder](#-collegamento-del-decoder)
- [Alimentazione](#-alimentazione)
- [Uscite Solenoide](#-uscite-solenoide)
- [Estensione Relè – Polarizzazione Unifrog](#-estensione-relè--polarizzazione-unifrog)
- [Estensione Relè – Polarizzazione Electrofrog](#-estensione-relè--polarizzazione-electrofrog)
- [Estensione Relè – Contatto Aperto (Uso Generale)](#️-estensione-relè--contatto-aperto-uso-generale)
- [Disaccoppiatori e Altri Carichi Induttivi](#-disaccoppiatori-e-altri-carichi-induttivi)
- [Configurazione dell'OS-Solenoid-Decoder](#️-configurazione-dellos-solenoid-decoder)
- [Comportamento dei LED in Modalità Operativa](#-comportamento-dei-led-in-modalità-operativa)
- [Accesso alla Modalità di Configurazione](#-accesso-alla-modalità-di-configurazione)
- [Prima di Iniziare](#-prima-di-iniziare)
- [Panoramica del Menu](#-panoramica-del-menu)
- [Menu 1: Assegnazione Indirizzo DCC](#-menu-1-assegnazione-indirizzo-dcc)
- [Menu 2: Selezione Tipo Uscita](#-menu-2-selezione-tipo-uscita)
- [Menu 3: Configurazione Tempo Impulso](#-menu-3-configurazione-tempo-impulso)
- [Menu 4: Ciclo di Lavoro PWM](#-menu-4-ciclo-di-lavoro-pwm)
- [Menu 5: Impostazioni Globali e Preset](#-menu-5-impostazioni-globali-e-preset)
- [Spiegazione del Controllo tramite Funzioni Locomotiva](#-spiegazione-del-controllo-tramite-funzioni-locomotiva)

---

## 🔧 Caratteristiche

- **Fino a 5 A di corrente di uscita totale** — aziona solenoidi pesanti, relè o motori di scambio senza booster esterni
- **Morsetti a vite innestabili** — semplificano la pre-installazione e consentono la rapida rimozione o sostituzione del decoder
- **Modalità di uscita multiple:**
  - Doppio Impulso (predefinito)
  - Impulso Singolo
  - Doppio Stabile
  - Singolo Stabile
  - Doppio Impulso con Relè Electrofrog
- **Una uscita alla volta** — il decoder commuta una coppia di uscite alla volta per prevenire il sovraccarico
- **Supporto opzionale modulo CDU** — riduce il consumo energetico e prolunga la vita dei motori di scambio
- **Rilevamento e protezione dal sovraccarico** — le uscite vengono disabilitate automaticamente in caso di sovraccarico
- **Configurazione tramite soli comandi DCC** — nessun software o hardware di programmazione richiesto
- **Preset di configurazione predefiniti** — impostare rapidamente tutte le uscite in modalità impulso, stabile o electrofrog con un singolo comando DCC
- **Controllo tramite funzioni locomotiva** (F1–F16) — per commutazione rapida con regolatori come Roco Lokmaus o Multimaus
- **Supporto offset indirizzo Roco** — supporto integrato per l'offset a 4 indirizzi Roco
- **Espandibile con schede relè e transistor:**
  - Modulo relè doppio per la polarizzazione degli scambi Electrofrog
  - Relè singolo a mantenimento per la commutazione della polarità Unifrog
  - Moduli relè a contatto aperto per controllo relè DCC a uso generale
  - Modulo driver transistor per motori di scambio a 2 fili

---

## 🔌 Collegamento del Decoder

L'OS-Solenoid-Decoder segue uno schema di cablaggio chiaro e coerente. L'alimentazione si collega in alto, le uscite si trovano su entrambi i lati.

---

## 🔋 Alimentazione

- Collegare la tensione del binario DCC oppure un'alimentazione DC (max 19 V) al decoder.
- Sia il segnale DCC che le linee di alimentazione si collegano dal lato superiore del decoder.
- ⚠️ Non utilizzare tensione AC — danneggerà il decoder.

---

## ⚡ Uscite Solenoide

Il decoder fornisce 8 blocchi di uscita doppia, progettati per i classici motori di scambio a doppia bobina.

Ogni blocco di uscita comprende:

- Due morsetti a vite esterni — per la bobina sinistra e destra (A e B)
- Un morsetto centrale — per il filo comune (COM), condiviso tra le due bobine

Questo schema consente di:

- Azionare fino a 8 motori di scambio a doppia bobina (ad es. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Oppure collegare direttamente motori di scambio a 3 fili come il MTB MP-1

Le uscite sono raggruppate in coppie con etichettatura chiara A, COM e B.

![Decoder solenoide con 8 motori di scambio a doppia bobina collegati](image.png)

Sebbene il decoder non sia progettato per il controllo di segnali, può azionare semplici segnali a due aspetti utilizzando le stesse uscite.

![Esempio di cablaggio di un segnale a due aspetti](image-1.png)

---

## 🔌 Estensione Relè – Polarizzazione Unifrog

Questa estensione alimenta automaticamente il frog degli scambi Unifrog tramite relè a mantenimento automatico.

- La scheda relè è composta da quattro piccole unità relè, che possono essere separate se se ne necessitano meno di quattro.

![Scheda estensione relè a mantenimento](image-2.png)

- I relè vengono eccitati dallo stesso segnale usato per attivare il motore di scambio — non è necessaria alcuna configurazione aggiuntiva.
- Ogni unità relè commuta la polarità del frog in base alla direzione dello scambio.

Con un relè per scambio, questa estensione gestisce fino a 8 frog Unifrog utilizzando due schede.

![Estensione relè montata sul decoder per il cablaggio Unifrog](image-3.png)

- La scheda relè si innesta direttamente nel connettore di espansione del decoder, ma può anche essere montata in remoto vicino allo scambio.

![Esempio di estensione relè montata in remoto](image-4.png)

Questo modulo relè è compatibile anche con altri decoder per solenoidi.

---

## ⚡ Estensione Relè – Polarizzazione Electrofrog

Gli scambi Electrofrog richiedono due commutazioni relè per scambio:

1. Una per disconnettere il frog prima di azionare il motore dello scambio
2. Una per ricollegarlo con la polarità corretta dopo la commutazione

Questa estensione gestisce automaticamente quella sequenza. È composta da quattro moduli relè doppi, collegati in modo permanente.

- Si innesta sul lato sinistro del decoder (contrassegnato per uso Electrofrog).
- Ogni coppia di relè è collegata a un'uscita solenoide: uscita 1 → coppia relè 1, uscita 2 → coppia relè 2, ecc.
- Questi moduli non possono essere separati, poiché condividono l'alimentazione del binario e la logica interna.

Il decoder dispone di una speciale modalità preset che attiva la sequenza di commutazione Electrofrog.
Se la polarità del frog risulta errata dopo l'installazione, invertire i jumper sul modulo relè per correggerla — senza necessità di riprogrammazione.

---

## ⚙️ Estensione Relè – Contatto Aperto (Uso Generale)

Per la commutazione di dispositivi esterni (luci, segnali, circuiti logici) tramite semplici contatti relè:

- Ogni unità fornisce un relè a doppia inversione (NO/NC), controllabile via DCC.
- Fino a 16 contatti relè indirizzabili individualmente quando completamente popolato.
- I moduli si innestano direttamente nel decoder oppure possono essere utilizzati in remoto con fili.
- Disponibili in versione fai-da-te a foro passante e in versione compatta SMD.

Come le schede relè Unifrog, questi moduli possono essere separati e riutilizzati con altri decoder DCC per solenoidi.

![Moduli relè a uso generale montati sul decoder](image-5.png)

![Dettaglio modulo relè a uso generale](image-6.png)

L'estensione relè a uso generale può anche polarizzare gli scambi Electrofrog con un cablaggio leggermente più complesso:

- Utilizzare i contatti NO (Normalmente Aperto)
- Unire entrambi i morsetti COM e collegarli al frog
- Collegare i contatti NO alle rotaie di alimentazione

![Cablaggio Electrofrog con moduli relè a uso generale](image-7.png)

Se un frog risulta con polarità errata, invertire i due fili di alimentazione del binario (come mostrato per il frog 4 nel diagramma sopra).

---

## 🧲 Disaccoppiatori e Altri Carichi Induttivi

L'OS-Solenoid-Decoder può azionare disaccoppiatori, elettromagneti e altri carichi induttivi oltre ai motori di scambio.

- **Modalità Impulso Singolo** (consigliata) — invia una breve scarica di corrente, ideale per bobine a molla o sensibili al tempo
- **Modalità Singolo Stabile** — mantiene l'uscita continuamente attiva, utile per relè monostabili o semplici dispositivi ON/OFF

![Esempio di cablaggio disaccoppiatore](image-8.png)

⚠️ I disaccoppiatori possono surriscaldarsi se azionati troppo a lungo — verificare sempre il foglio dati per la propria marca di binari e mantenere i tempi di impulso brevi.

---

## ⚙️ Configurazione dell'OS-Solenoid-Decoder

Per impostazione predefinita il decoder funziona in modalità normale quando viene alimentato. Due LED forniscono un feedback visivo su ciò che sta accadendo.

---

## 🔦 Comportamento dei LED in Modalità Operativa

| Pattern LED | Modalità |
|-------------|------|
| Entrambi i LED lampeggiano | Doppio Impulso (predefinito) |
| Un LED lampeggia, uno SPENTO | Impulso Singolo |
| Entrambi i LED ACCESI | Doppio Stabile |
| Un LED ACCESO | Singolo Stabile |
| Un LED ACCESO + altro LED lampeggiante | Modalità Electrofrog (doppio impulso + relè frog) |

Quando le uscite sono configurate con tipi misti, il LED sinistro rimane ACCESO e quello destro lampeggia continuamente una volta per indicare la modalità a configurazione mista.

---

## 🧰 Accesso alla Modalità di Configurazione

Per accedere alla modalità di configurazione:

1. Tenere premuto il pulsante di configurazione. Il LED destro inizia a lampeggiare:
   - 1 lampeggio = Menu 1
   - 2 lampeggi = Menu 2
   - ... fino al Menu 5
2. Rilasciare il pulsante quando il LED raggiunge il menu desiderato.

Una volta in un menu:

- Il LED sinistro lampeggia lo stesso numero di volte del numero del menu (ad es. 3 lampeggi = Menu 3).
- Premere di nuovo il pulsante per uscire dal menu, a meno che la sezione sottostante non indichi diversamente.

![Diagramma di flusso del menu di configurazione](image-9.png)

---

## 🧠 Prima di Iniziare

Se si prevede di utilizzare tipi di uscita misti (ad es. Singolo Stabile per relè insieme a Doppio Impulso per motori di scambio), pianificare prima su carta le assegnazioni delle uscite.

**Esempio:** se le uscite 5–8 devono essere Singolo Stabile (per 8 relè) e le uscite 1–4 devono essere Doppio Stabile (per motori di scambio), è necessario:

1. Usare il Menu 2 per assegnare i tipi di uscita corretti
2. Poi usare il Menu 1 per assegnare attentamente gli indirizzi DCC, poiché le uscite singole utilizzano più indirizzi

---

## 📖 Panoramica del Menu

| Menu | Funzione |
|------|----------|
| 1 | Assegnazione Indirizzo DCC |
| 2 | Selezione Tipo Uscita |
| 3 | Configurazione Tempo Impulso |
| 4 | Ciclo di Lavoro PWM |
| 5 | Impostazioni Globali e Preset |

---

## 🟠 Menu 1: Assegnazione Indirizzo DCC

Utilizzare questo menu per assegnare indirizzi DCC a ciascuna uscita.

Regole:
- Le modalità doppie utilizzano 1 indirizzo
- Le modalità singole utilizzano 2 indirizzi (A e B separatamente)

Se si assegna l'indirizzo 20 all'Uscita 1 in modalità singola, occuperà gli indirizzi 20 e 21. L'Uscita 2 inizierà quindi dall'indirizzo 22. Il decoder gestisce automaticamente questo scorrimento.

Selezione delle uscite:
- Inviare l'indirizzo DCC accessori da 1 a 8 per selezionare un'uscita.
- Inviare un secondo indirizzo per assegnarlo a quell'uscita.
- Inviare l'indirizzo 9 come selettore per applicare lo stesso indirizzo a tutte le uscite contemporaneamente.

In modalità di indirizzamento univoco, è possibile assegnare a ogni uscita un indirizzo personalizzato, inclusi numeri ripetuti o saltati. Il decoder torna immediatamente alla modalità operativa dopo l'assegnazione, a meno che la modalità univoca non sia attiva — in quel caso premere il pulsante di configurazione per uscire.

---

## 🟡 Menu 2: Selezione Tipo Uscita

Ogni uscita può essere impostata su uno dei seguenti tipi:

| ID Tipo | Descrizione Modalità |
|---------|-----------------|
| 1 | Doppio Impulso (predefinito) |
| 2 | Doppio Stabile |
| 3 | Impulso Singolo |
| 4 | Singolo Stabile |
| 5 | Doppio Impulso con supporto relè Electrofrog |

In modalità Electrofrog, le uscite 1–4 controllano le coppie di relè sulle uscite 8–5 in ordine inverso (uscita 1 → relè 8, uscita 2 → relè 7, ecc.).

Selezionare quale uscita configurare inviando l'indirizzo DCC da 1 a 8.

---

## 🔵 Menu 3: Configurazione Tempo Impulso

Regolazione fine del tempo di impulso per ciascuna uscita.

**Uscite a Impulso Singolo:**
- Il tempo è impostato in secondi interi
- Indirizzo 10 = 10 secondi
- Intervallo: 1–4096 secondi
- Predefinito: 5 s

**Uscite a Doppio Impulso:**
- Il tempo è impostato in passi da 10 ms
- Indirizzo 1 = 10 ms
- Massimo: 40,9 s (4096 × 10 ms)
- Predefinito: 50 ms

Inviare l'indirizzo 9 per applicare lo stesso tempo a tutte le uscite contemporaneamente.

---

## 🟣 Menu 4: Ciclo di Lavoro PWM

Disponibile per le uscite configurate in modalità Stabile (Singolo o Doppio).

Il PWM riduce la potenza media erogata — ideale per motori lenti come il MTB MP-1.

- Frequenza PWM: 50 Hz
- Indirizzo 10 = 100% ciclo di lavoro (predefinito; piena potenza, nessun PWM)

| Indirizzo | Ciclo di Lavoro |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (predefinito) |

Inviare l'indirizzo 9 per applicare lo stesso ciclo di lavoro a tutte le uscite.

---

## 🔘 Menu 5: Impostazioni Globali e Preset

**Preset — imposta tutti i tipi di uscita contemporaneamente:**

| Indirizzo | Modalità Preset |
|---------|------------|
| 1 | Doppio Impulso (predefinito) |
| 2 | Doppio Stabile |
| 3 | Impulso Singolo |
| 4 | Singolo Stabile |
| 5 | Doppio Impulso con modalità Electrofrog |

**Opzioni speciali:**

| Indirizzo | Impostazione |
|---------|---------|
| 20 | Disabilita indirizzi di uscita univoci (predefinito) |
| 21 | Abilita indirizzi di uscita univoci |
| 30 | Disabilita supporto comandi DCC EXT (predefinito) |
| 31 | Abilita supporto lunghezza impulso DCC EXT |
| 40 | Disabilita controllo tramite funzioni locomotiva (predefinito) |
| 41 | Abilita funzioni locomotiva (F1–F16, 1 indirizzo) |
| 42 | Abilita funzioni locomotiva (F1–F4, 2+ indirizzi) |
| 996 / 1000 | Disabilita offset a 4 indirizzi Roco (predefinito) |
| 997 / 1001 | Abilita offset a 4 indirizzi Roco |

---

## 📟 Spiegazione del Controllo tramite Funzioni Locomotiva

È possibile controllare il decoder tramite i tasti funzione locomotiva (F1–F16) invece dei comandi DCC per accessori.

**Vantaggi:**
- Funziona con regolatori come Roco Lokmaus 2
- Commutazione molto rapida — ideale per un controllo veloce del plastico

**Modalità:**
- **Modalità F1–F16:** utilizza 1 indirizzo locomotiva
- **Modalità F1–F4:** utilizza 2 o più indirizzi locomotiva (utile per regolatori che supportano solo F1–F4)

L'indirizzo locomotiva utilizzato corrisponde all'indirizzo DCC assegnato all'Uscita 1.

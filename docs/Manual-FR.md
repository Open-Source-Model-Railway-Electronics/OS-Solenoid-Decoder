> 🌐 &nbsp; [🇬🇧 EN](Manual-EN.md) &nbsp;|&nbsp; [🇩🇪 DE](Manual-DE.md) &nbsp;|&nbsp; 🇫🇷 FR &nbsp;|&nbsp; [🇳🇱 NL](Manual-NL.md) &nbsp;|&nbsp; [🇪🇸 ES](Manual-ES.md) &nbsp;|&nbsp; [🇮🇹 IT](Manual-IT.md) &nbsp;|&nbsp; [🇵🇱 PL](Manual-PL.md) &nbsp;|&nbsp; [🇨🇿 CS](Manual-CS.md) &nbsp;|&nbsp; [🇩🇰 DA](Manual-DA.md) &nbsp;|&nbsp; [🇳🇴 NO](Manual-NO.md) &nbsp;|&nbsp; [🇸🇪 SV](Manual-SV.md) &nbsp;|&nbsp; [🇭🇺 HU](Manual-HU.md) &nbsp;|&nbsp; [🇵🇹 PT](Manual-PT.md)

# OS-Solenoid-Decoder

## 📘 Introduction

Le OS-Solenoid-Decoder est un décodeur DCC accessoire simple et puissant pour la commutation de :

- Aiguilles (moteurs d'aiguille)
- Relais
- Dételeurs
- Tout autre dispositif à entraînement solénoïde

Il peut supporter des charges allant jusqu'à 5 A et prend en charge presque tous les types de moteurs d'aiguille.
Il peut également être utilisé en combinaison avec des OS-relays pour gérer la polarisation du cœur d'aiguille pour les aiguilles Electrofrog et Unifrog.

Ce décodeur est conçu pour être :

- **Facile à câbler** — les borniers à vis enfichables facilitent le précâblage et permettent un retrait ou un remplacement rapide
- **Facile à configurer** — utilise uniquement des commandes DCC accessoire standard ; aucun ordinateur, aucun CV, aucun POM
- **Modulaire** — cartes d'extension relais et transistors optionnelles
- **Robuste** — protection intégrée contre les surcharges

Que vous construisiez un grand réseau ou que vous vouliez simplement quelque chose qui fonctionne sans complications : ce décodeur est fait pour accomplir la tâche.

---

## Table des matières

- [Caractéristiques](#-caractéristiques)
- [Connexion du décodeur](#-connexion-du-décodeur)
- [Alimentation électrique](#-alimentation-électrique)
- [Sorties solénoïde](#-sorties-solénoïde)
- [Extension relais – Polarisation Unifrog](#-extension-relais--polarisation-unifrog)
- [Extension relais – Polarisation Electrofrog](#-extension-relais--polarisation-electrofrog)
- [Extension relais – Contact ouvert (usage général)](#️-extension-relais--contact-ouvert-usage-général)
- [Dételeurs et autres charges inductives](#-dételeurs-et-autres-charges-inductives)
- [Configuration du OS-Solenoid-Decoder](#️-configuration-du-os-solenoid-decoder)
- [Comportement des LED en mode de fonctionnement](#-comportement-des-led-en-mode-de-fonctionnement)
- [Entrée en mode de configuration](#-entrée-en-mode-de-configuration)
- [Avant de commencer](#-avant-de-commencer)
- [Vue d'ensemble des menus](#-vue-densemble-des-menus)
- [Menu 1 : Assignation d'adresse DCC](#-menu-1--assignation-dadresse-dcc)
- [Menu 2 : Sélection du type de sortie](#-menu-2--sélection-du-type-de-sortie)
- [Menu 3 : Configuration du temps d'impulsion](#-menu-3--configuration-du-temps-dimpulsion)
- [Menu 4 : Rapport cyclique PWM](#-menu-4--rapport-cyclique-pwm)
- [Menu 5 : Réglages globaux et préréglages](#-menu-5--réglages-globaux-et-préréglages)
- [Explication de la commande par fonctions de locomotive](#-explication-de-la-commande-par-fonctions-de-locomotive)

---

## 🔧 Caractéristiques

- **Jusqu'à 5 A de courant de sortie total** — pilote des solénoïdes lourds, relais ou moteurs d'aiguille sans amplificateurs externes
- **Borniers à vis enfichables** — facilite le précâblage et permet un retrait ou un remplacement rapide du décodeur
- **Modes de sortie multiples :**
  - Double Impulsion (par défaut)
  - Simple Impulsion
  - Double Continu
  - Simple Continu
  - Double Impulsion avec relais Electrofrog
- **Une sortie à la fois** — le décodeur commute une paire de sorties à la fois pour éviter les surcharges
- **Support optionnel du module CDU** — réduit la consommation d'énergie et prolonge la durée de vie des moteurs d'aiguille
- **Détection et protection contre les surcharges** — les sorties sont automatiquement désactivées en cas de surcharge détectée
- **Configuration via commandes DCC uniquement** — aucun logiciel ou matériel de programmation requis
- **Préréglages de configuration prédéfinis** — basculez rapidement toutes les sorties en mode impulsion, continu ou electrofrog avec une seule commande DCC
- **Commande par fonctions de locomotive** (F1–F16) — pour une commutation rapide via des manettes comme la Roco Lokmaus ou la Multimaus
- **Support du décalage d'adresse Roco** — prise en charge intégrée du décalage de 4 adresses Roco
- **Extensible avec cartes relais et transistors :**
  - Module relais double pour la polarisation des aiguilles Electrofrog
  - Relais bistable simple pour la commutation de polarité Unifrog
  - Modules relais à contact ouvert pour la commande DCC de relais à usage général
  - Module pilote transistor pour les moteurs d'aiguille à deux fils

---

## 🔌 Connexion du décodeur

Le OS-Solenoid-Decoder suit une disposition de câblage claire et cohérente. L'alimentation est connectée en haut, les sorties sont des deux côtés.

---

## 🔋 Alimentation électrique

- Connectez soit la tension de voie DCC, soit une alimentation DC (max. 19 V) au décodeur.
- Le signal DCC et les lignes d'alimentation se connectent depuis le côté supérieur du décodeur.
- ⚠️ N'utilisez pas de tension AC — cela endommagerait le décodeur.

---

## ⚡ Sorties solénoïde

Le décodeur fournit 8 blocs de sortie double, conçus pour les moteurs d'aiguille classiques à double bobine.

Chaque bloc de sortie comporte :

- Deux bornes à vis extérieures — pour la bobine gauche et droite (A et B)
- Une borne centrale — pour le fil commun (COM), partagé entre les deux bobines

Cette disposition vous permet de :

- Piloter jusqu'à 8 moteurs d'aiguille à double bobine (par ex. PECO, Fleischmann, Märklin, Roco, Piko, Hornby)
- Ou connecter directement des moteurs d'aiguille à 3 fils comme le MTB MP-1

Les sorties sont regroupées par paires avec un marquage clair A, COM et B.

![Décodeur solénoïde avec 8 moteurs d'aiguille à double bobine connectés](image.png)

Bien que le décodeur ne soit pas conçu pour la commande de signaux, il peut piloter de simples signaux à deux aspects en utilisant les mêmes sorties.

![Exemple de câblage d'un signal à deux aspects](image-1.png)

---

## 🔌 Extension relais – Polarisation Unifrog

Cette extension alimente automatiquement le cœur des aiguilles Unifrog à l'aide de relais à accrochage automatique.

- La carte relais se compose de quatre petites unités relais, qui peuvent être séparées par rupture si vous en avez besoin de moins de quatre.

![Carte d'extension à relais bistables](image-2.png)

- Les relais sont verrouillés par le même signal utilisé pour déclencher le moteur d'aiguille — aucune configuration supplémentaire n'est nécessaire.
- Chaque unité relais commute la polarité du cœur en fonction du sens de l'aiguille.

Avec un relais par aiguille, cette extension gère jusqu'à 8 cœurs Unifrog avec deux cartes.

![Extension relais montée sur le décodeur pour le câblage Unifrog](image-3.png)

- La carte relais se branche directement dans l'en-tête d'extension du décodeur, mais peut également être montée à distance près de l'aiguille.

![Exemple d'extension relais montée à distance](image-4.png)

Ce module relais est également compatible avec d'autres décodeurs solénoïde.

---

## ⚡ Extension relais – Polarisation Electrofrog

Les aiguilles Electrofrog nécessitent deux commutateurs relais par aiguille :

1. Un pour déconnecter le cœur avant la commutation du moteur d'aiguille
2. Un pour le reconnecter avec la polarité correcte ensuite

Cette extension gère automatiquement cette séquence. Elle se compose de quatre modules relais doubles, liés de façon permanente.

- Elle se branche sur le côté gauche du décodeur (marqué pour l'utilisation electrofrog).
- Chaque paire de relais est liée à une sortie solénoïde : sortie 1 → paire relais 1, sortie 2 → paire relais 2, etc.
- Ces modules ne peuvent pas être séparés, car ils partagent l'alimentation de voie et la logique interne.

Le décodeur dispose d'un mode préréglage spécial qui active la séquence de commutation electrofrog.
Si la polarité du cœur est incorrecte après l'installation, retournez les cavaliers sur le module relais pour la corriger — aucune reprogrammation nécessaire.

---

## ⚙️ Extension relais – Contact ouvert (usage général)

Pour commuter des dispositifs externes (éclairages, signaux, circuits logiques) à l'aide de simples contacts relais :

- Chaque unité fournit un relais inverseur (NO/NC), commandable via DCC.
- Jusqu'à 16 contacts relais individuellement adressables lorsque entièrement équipé.
- Les modules se branchent directement dans le décodeur ou peuvent être utilisés à distance avec des fils.
- Disponible en version DIY traversante et en version SMD compacte.

Comme les cartes relais Unifrog, ces modules peuvent être séparés par rupture et réutilisés avec d'autres décodeurs DCC solénoïde.

![Modules relais à usage général montés sur le décodeur](image-5.png)

![Détail du module relais à usage général](image-6.png)

L'extension relais à usage général peut également polariser les aiguilles Electrofrog avec un câblage légèrement plus élaboré :

- Utilisez les contacts NO (Normalement Ouvert)
- Reliez en boucle les deux contacts COM et connectez-les au cœur
- Connectez les contacts NO aux rails d'alimentation de voie

![Câblage electrofrog avec modules relais à usage général](image-7.png)

Si un cœur se retrouve avec la mauvaise polarité, échangez les deux fils d'alimentation de voie (comme indiqué pour le cœur 4 dans le schéma ci-dessus).

---

## 🧲 Dételeurs et autres charges inductives

Le OS-Solenoid-Decoder peut piloter des dételeurs, des électroaimants et d'autres charges inductives en plus des moteurs d'aiguille.

- **Mode Simple Impulsion** (recommandé) — envoie une brève impulsion de courant, idéal pour les bobines à ressort ou sensibles au temps
- **Mode Simple Continu** — maintient la sortie continuellement activée, utile pour les relais monostables ou les dispositifs ON/OFF simples

![Exemple de câblage de dételeur](image-8.png)

⚠️ Les dételeurs peuvent surchauffer si la commutation est trop longue — vérifiez toujours la fiche technique de votre marque de voie et maintenez les temps d'impulsion courts.

---

## ⚙️ Configuration du OS-Solenoid-Decoder

Par défaut, le décodeur fonctionne en mode normal à la mise sous tension. Deux LED fournissent un retour visuel sur ce qui se passe.

---

## 🔦 Comportement des LED en mode de fonctionnement

| Motif LED | Mode |
|-------------|------|
| Les deux LED clignotent | Double Impulsion (par défaut) |
| Une LED clignote, l'autre ÉTEINTE | Simple Impulsion |
| Les deux LED allumées | Double Continu |
| Une LED allumée | Simple Continu |
| Une LED allumée + l'autre LED clignote | Mode Electrofrog (double impulsion + relais de cœur) |

Lorsque des sorties sont configurées avec des types mixtes, la LED gauche reste allumée et la LED droite clignote une fois en continu pour indiquer le mode de configuration mixte.

---

## 🧰 Entrée en mode de configuration

Pour entrer en mode de configuration :

1. Maintenez le bouton de configuration enfoncé. La LED droite commence à clignoter :
   - 1 clignotement = Menu 1
   - 2 clignotements = Menu 2
   - ... jusqu'au Menu 5
2. Relâchez le bouton lorsque la LED atteint le menu souhaité.

Une fois dans un menu :

- La LED gauche clignote le même nombre de fois que le numéro du menu (ex. 3 clignotements = Menu 3).
- Appuyez à nouveau sur le bouton pour quitter le menu, sauf indication contraire dans la section ci-dessous.

![Organigramme du menu de configuration](image-9.png)

---

## 🧠 Avant de commencer

Si vous prévoyez d'utiliser des types de sortie mixtes (par ex. Simple Continu pour les relais avec Double Impulsion pour les moteurs d'aiguille), planifiez d'abord vos assignations de sorties sur papier.

**Exemple :** si les sorties 5 à 8 doivent être en Simple Continu (pour 8 relais) et les sorties 1 à 4 en Double Continu (pour les moteurs d'aiguille), vous devez :

1. Utiliser le Menu 2 pour assigner les types de sortie corrects
2. Puis utiliser le Menu 1 pour assigner les adresses DCC avec soin, car les sorties simples utilisent plus d'adresses

---

## 📖 Vue d'ensemble des menus

| Menu | Fonction |
|------|----------|
| 1 | Assignation d'adresse DCC |
| 2 | Sélection du type de sortie |
| 3 | Configuration du temps d'impulsion |
| 4 | Rapport cyclique PWM |
| 5 | Réglages globaux et préréglages |

---

## 🟠 Menu 1 : Assignation d'adresse DCC

Utilisez ce menu pour assigner des adresses DCC à chaque sortie.

Règles :
- Les modes Double utilisent 1 adresse
- Les modes Simple utilisent 2 adresses (A et B séparément)

Si vous assignez l'adresse 20 à la sortie 1 en mode Simple, elle occupera les adresses 20 et 21. La sortie 2 commencera alors à 22. Le décodeur gère ce décalage automatiquement.

Sélection des sorties :
- Envoyez l'adresse DCC accessoire 1 à 8 pour sélectionner une sortie.
- Envoyez une seconde adresse pour l'assigner à cette sortie.
- Envoyez l'adresse 9 comme sélecteur pour appliquer la même adresse à toutes les sorties simultanément.

En mode d'adressage unique, vous pouvez donner à chaque sortie une adresse personnalisée, y compris des numéros répétés ou sautés. Le décodeur retourne immédiatement en mode de fonctionnement après l'assignation, sauf si le mode unique est actif — dans ce cas, appuyez sur le bouton de configuration pour quitter.

---

## 🟡 Menu 2 : Sélection du type de sortie

Chaque sortie peut être réglée sur l'un des types suivants :

| ID de type | Description du mode |
|---------|-----------------|
| 1 | Double Impulsion (par défaut) |
| 2 | Double Continu |
| 3 | Simple Impulsion |
| 4 | Simple Continu |
| 5 | Double Impulsion avec support du relais Electrofrog |

En mode Electrofrog, les sorties 1 à 4 commandent les paires de relais des sorties 8 à 5 dans l'ordre inverse (sortie 1 → relais 8, sortie 2 → relais 7, etc.).

Sélectionnez la sortie à configurer en envoyant l'adresse DCC 1 à 8.

---

## 🔵 Menu 3 : Configuration du temps d'impulsion

Affinez le temps d'impulsion pour chaque sortie.

**Sorties Simple Impulsion :**
- Le temps est réglé en secondes entières
- Adresse 10 = 10 secondes
- Plage : 1 à 4096 secondes
- Par défaut : 5 s

**Sorties Double Impulsion :**
- Le temps est réglé par pas de 10 ms
- Adresse 1 = 10 ms
- Maximum : 40,9 s (4096 × 10 ms)
- Par défaut : 50 ms

Envoyez l'adresse 9 pour appliquer le même temps à toutes les sorties simultanément.

---

## 🟣 Menu 4 : Rapport cyclique PWM

Disponible pour les sorties configurées en mode Continu (Simple ou Double).

Le PWM réduit la puissance moyenne délivrée — idéal pour les moteurs lents comme le MTB MP-1.

- Fréquence PWM : 50 Hz
- Adresse 10 = rapport cyclique 100% (par défaut ; pleine puissance, sans PWM)

| Adresse | Rapport cyclique |
|---------|-----------|
| 1 | 10% |
| 2 | 20% |
| ... | ... |
| 10 | 100% (par défaut) |

Envoyez l'adresse 9 pour appliquer le même rapport cyclique à toutes les sorties.

---

## 🔘 Menu 5 : Réglages globaux et préréglages

**Préréglages — régler tous les types de sortie en une fois :**

| Adresse | Mode préréglé |
|---------|------------|
| 1 | Double Impulsion (par défaut) |
| 2 | Double Continu |
| 3 | Simple Impulsion |
| 4 | Simple Continu |
| 5 | Double Impulsion avec mode Electrofrog |

**Options spéciales :**

| Adresse | Réglage |
|---------|---------|
| 20 | Désactiver les adresses de sortie uniques (par défaut) |
| 21 | Activer les adresses de sortie uniques |
| 30 | Désactiver le support des commandes DCC EXT (par défaut) |
| 31 | Activer le support de longueur d'impulsion DCC EXT |
| 40 | Désactiver la commande par fonctions de locomotive (par défaut) |
| 41 | Activer les fonctions locomotive (F1–F16, 1 adresse) |
| 42 | Activer les fonctions locomotive (F1–F4, 2+ adresses) |
| 996 / 1000 | Désactiver le décalage d'adresse Roco de 4 (par défaut) |
| 997 / 1001 | Activer le décalage d'adresse Roco de 4 |

---

## 📟 Explication de la commande par fonctions de locomotive

Vous pouvez commander le décodeur en utilisant les touches de fonction de locomotive (F1–F16) au lieu des commandes DCC accessoire.

**Avantages :**
- Fonctionne avec des manettes comme la Roco Lokmaus 2
- Commutation très rapide — idéal pour la commande rapide du réseau

**Modes :**
- **Mode F1–F16 :** utilise 1 adresse de locomotive
- **Mode F1–F4 :** utilise 2 adresses de locomotive ou plus (utile pour les manettes qui ne prennent en charge que F1–F4)

L'adresse de locomotive utilisée correspond à l'adresse DCC assignée à la sortie 1.

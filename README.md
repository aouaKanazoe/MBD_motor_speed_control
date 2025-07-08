# 🌀 PCMS - Percent Controlled Motor Speed

## 📋 Description

**PCMS** (Percent Controlled Motor Speed) est un composant logiciel (SWC) modélisé sous **Simulink** et généré automatiquement avec **Embedded Coder**. Il permet de contrôler le sens et l’activation d’un moteur à partir d’une entrée analogique (valeur en pourcentage) et d’un interrupteur directionnel.

Le code généré est intégré dans un projet **PlatformIO** et déployé sur une carte **Arduino**.

---

## 🧱 Architecture du projet

- 🔧 **Modélisation** : Simulink (MathWorks)
- ⚙️ **Génération de code** : Embedded Coder
- 🛠️ **Intégration** : PlatformIO (VSCode)
- 💡 **Cible matérielle** : Carte **Arduino Uno** (ou compatible)

---

## ⚙️ Fonctionnalités principales

| ID        | Élément                  | Type     | Description                                                  |
|-----------|--------------------------|----------|--------------------------------------------------------------|
| `SRS_001` | Percent Raw Value        | Integer  | Valeur brute d'entrée à convertir (ex : ADC)                |
| `SRS_002` | Direction Control Switch | Boolean  | Sens du moteur (actif/inactif)                              |
| `SRS_003` | Indicator Lamp           | Boolean  | Allumée si pourcentage > 50%                                |
| `SRS_004` | Motor Logic A            | Boolean  | Pilotage logique du moteur en sens A                        |
| `SRS_005` | Motor Logic B            | Boolean  | Pilotage logique du moteur en sens B                        |

---

## 🧠 Règles Fonctionnelles

- `SRS_005`: `Percent Value` = `Percent Raw Value` ÷ `ADC Resolution` (valeur calibrable)
- `SRS_006`: Si `Percent Value > 50%` → `Indicator Lamp = HIGH`, sinon `LOW`
- `SRS_007`: Si `Direction Switch = OFF` et cycles ≤ `Percent Value` → `Motor Logic A = HIGH`, sinon `LOW`
- `SRS_008`: Si `Direction Switch = OFF` → `Motor Logic A = LOW`
- `SRS_009`: Si `Direction Switch = ON` et cycles ≤ `Percent Value` → `Motor Logic B = HIGH`, sinon `LOW`
- `SRS_010`: Si `Direction Switch = ON` → `Motor Logic B = LOW`

---

## 🔁 Flux de travail

1. **Conception & simulation** sous **Simulink**
2. **Génération du code C** via Embedded Coder (`ert_main.c`, `.c/.h`)
3. **Intégration dans PlatformIO** :
   - Ajout dans le dossier `src/`
   - Adaptation dans `main.cpp` 
4. **Compilation & téléversement** sur Arduino via PlatformIO

---

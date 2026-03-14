# 🚀 SIMBA MAVLink CI/CD System

Ten projekt wykorzystuje w pełni zautomatyzowany potok (pipeline) budowania definicji MAVLink. Każda zmiana w pliku `simba.xml` jest automatycznie procesowana, wersjonowana i wydawana jako gotowa biblioteka.

## 🛠 Jak działa automatyzacja?

Proces jest podzielony na dwa etapy (Joby) w GitHub Actions:

1.  **Semantic Release (Analiza)**: 
    * Analizuje historię commitów od ostatniego wydania.
    * Automatycznie wyznacza nowy numer wersji (SemVer).
    * Generuje plik `CHANGELOG.md`.
    * Tworzy nowy Tag i Release na GitHubie.
2.  **Mavlink Build (Kompilacja)**:
    * Odpala się tylko wtedy, gdy Job 1 wykryje istotne zmiany.
    * Generuje nagłówki **C**, bibliotekę **Python** oraz skrypt **Wireshark (LUA)**.
    * Pakuje wszystko do ZIP i dołącza do wydania (Release Assets).



---

## 📋 Instrukcja dla Deweloperów

System opiera się na **Conventional Commits**. Aby automat poprawnie rozpoznał zmianę, tytuł Twojego Commita lub Pull Requesta musi zaczynać się od odpowiedniego prefixu.

### Typy Zmian (Wersjonowanie)

| Prefix | Rodzaj zmiany | Skutek (SemVer) | Przykład |
| :--- | :--- | :--- | :--- |
| `feat:` | Nowa funkcjonalność | Podbija **Minor** (np. 1.1.0) | `feat: dodano telemetrię temperatury` |
| `fix:` | Poprawka błędu | Podbija **Patch** (np. 1.0.1) | `fix: poprawka ID wiadomości IMU` |
| `feat!:` | Zmiana niszcząca (Breaking) | Podbija **Major** (np. 2.0.0) | `feat!: zmiana struktury nagłówka radia` |
| `chore:` | Zmiany techniczne/dokumentacja | **Brak nowej wersji** | `chore: aktualizacja README` |

### Cykl pracy (Step-by-Step)

1.  Zaimplementuj zmiany w pliku `simba.xml`.
2.  Wyślij zmiany na branch typu `feature/` lub `fix/`.
3.  Otwórz **Pull Request** do gałęzi `main`.
4.  Upewnij się, że tytuł PR jest zgodny z powyższą tabelą (np. `feat: add pressure sensors`).
5.  Zrób **Merge** (zalecany *Squash and Merge*).
6.  Po ok. 2 minutach sprawdź zakładkę **Releases** w repozytorium – znajdziesz tam gotowe biblioteki.

---

## 📦 Wygenerowane Pliki

W każdym Release znajdziesz:
* `simba_mavlink_vX.Y.Z.zip` – Pełna paczka (C, Python, LUA).
* `simba_dialects.py` – Samodzielny dialekt do użycia w skryptach Python (`pymavlink`).
* `simba_mavlink_wireshark.lua` – Wtyczka do Wiresharka do debugowania ramek na żywo.
* `simba.xml` – Kopia definicji użytej do budowy danej wersji.

---

## ⚙️ Konfiguracja Techniczna

* **Protokół**: MAVLink 2.0 (ustawione w `release.yml`).
* **Zależności**: `pymavlink`, `lxml`.
* **Standard**: `--strict-units` (wymusza poprawne jednostki w definicjach).

# Simba MAVLink Dialect

This repository contains the MAVLink dialect definition for the Simba rocket system. MAVLink is a lightweight, header-only message marshaling library for microcontrollers.

## Overview

The Simba MAVLink dialect extends the standard MAVLink protocol with custom messages and enumerations specifically designed for rocket telemetry and control systems. It includes definitions for:

- Rocket flight states and actuator control
- Sensor data (IMU, GPS, temperature, pressure)
- Ground station commands and telemetry
- Radio link status monitoring

## Files

- `simba.xml` - Main dialect definition with custom messages and enums
- `simba_radio.xml` - Radio status message definition (included in main dialect)
- `bin/` - Directory for generated MAVLink libraries (currently empty)

## Important Decoding Note

⚠️ **Critical**: All field descriptions in this dialect indicate how the message was **created** on the sender side, not how to **decode** it on the receiver side.

For example:
- If a field comment shows `<!-- temp = float * 10 -->`, it means the sender multiplied the temperature by 10 before sending
- To get the actual temperature value, you must **divide** the received field by 10
- `<!-- pressure = float * 10 -->` means divide received pressure by 10
- IMU scaling factors are documented in the message comments

Always check the field comments and apply the inverse operation for decoding.

## Messages

### Rocket Telemetry
- **SIMBA_TANK_TEMPERATURE** (ID: 69) - Tank temperature sensors
- **SIMBA_TANK_PRESSURE** (ID: 70) - Tank pressure sensor
- **SIMBA_IMU** (ID: 71) - IMU data with scaling factors
- **SIMBA_GPS** (ID: 72) - GPS position data
- **SIMBA_ROCKET_HEARTBEAT** (ID: 73) - Rocket system status
- **SIMBA_MAX_ALTITUDE** (ID: 75) - Maximum recorded altitude
- **SIMBA_COMPUTER_TEMPERATURE** (ID: 76) - Computer temperatures and resource usage

### Ground Station
- **SIMBA_GS_HEARTBEAT** (ID: 74) - Ground station commands
- **SIMBA_ACTUATOR_CMD** (ID: 147) - Direct actuator control (testing only)

### Radio
- **RADIO_STATUS** (ID: 109) - Radio link status and quality metrics

## Enums

- **SIMBA_ROCKET_STATE** - Rocket flight phases from initialization to landing
- **SIMBA_ACTUATOR_FLAGS** - Bitmask for rocket actuators (valves, servos, cameras)
- **SIMBA_GS_FLAGS** - Bitmask for ground station command buttons

## Usage

1. Include this dialect in your MAVLink implementation
2. Generate MAVLink libraries using the official MAVLink generator
3. Use the custom message IDs and enums in your rocket firmware and ground station software
4. Remember to apply proper scaling when decoding received messages

## Dependencies

- MAVLink protocol (https://mavlink.io/)
- MAVLink generator tools for code generation

## License

[Add appropriate license information here]

## Contributing

[Add contribution guidelines here]
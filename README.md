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
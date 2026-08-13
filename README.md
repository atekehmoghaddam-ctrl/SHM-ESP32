# SHM-ESP32 — Structural Health Monitoring System

Ein echtzeitfähiges Embedded-System zur Erkennung struktureller Schäden durch Messung und Analyse von Vibrationsmustern — ohne Cloud-Anbindung.

**Eigenständiges Projekt | HTW Berlin | Elektrotechnik**

---

## Problemstellung

Strukturelle Schäden an Brücken, Flugzeugen und Industriemaschinen verursachen jährlich Schäden in Milliardenhöhe. Aktuelle Überwachungssysteme sind oft teuer, komplex und cloud-abhängig.

Dieses Projekt entwickelt eine kostengünstige, autonome Embedded-Lösung.

---

## Systemüberblick

Vibrationssensor → ESP32 → FFT-Analyse → Schadenserkennung → WiFi-Alarm

---

## Roadmap

| Semester | Ziel | Status |
|----------|------|--------|
| 3 | Hardware-Aufbau + erste Vibrationsmessung | ✅ Abgeschlossen |
| 4 | FFT-Signalanalyse + Schadensklassifikation | 📅 Geplant |
| 5 | Automation + TinyML-Datensammlung | 📅 Geplant |
| 6 | Vollständiges System | 🎯 Ziel |

---

## Hardware (Semester 3)

| Komponente | Zweck | Status |
|------------|-------|--------|
| ESP32 Development Board | Haupt-Mikrocontroller | ✅ Vorhanden |
| ADXL345 Beschleunigungssensor | Vibrationsmessung | ✅ Vorhanden |
| Aluminiumrohr | Testkörper | ✅ Vorhanden |

---

## Repository-Struktur

| Ordner | Inhalt |
|--------|--------|
| `firmware/` | ESP32 Quellcode |
| `hardware/` | Schaltpläne und Fotos |
| `data/` | Messdaten und Auswertungen |
| `docs/` | Versuchsprotokolle |

---

## Bisherige Ergebnisse

**Versuch 1 (Semester 3):** Erfolgreiche Erfassung und Visualisierung von Beschleunigungsdaten eines Aluminiumrohrs in drei Raumachsen mittels ADXL345 und ESP32 über I2C.

Vollständiges Protokoll: [`docs/versuch1_protokoll.md`](docs/versuch1_protokoll.md)

---

## Verwendete Technologien

ESP32 · C++ · Arduino IDE · I2C · FFT · TinyML · Edge Impulse · Python

---

## Autorin

**Studentin Elektrotechnik — HTW Berlin**
3. Semester | Projektbeginn: Juni 2026

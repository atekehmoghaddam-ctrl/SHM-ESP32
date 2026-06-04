# SHM-ESP32 — Structural Health Monitoring System

A real-time embedded system that detects structural damage 
by measuring and analyzing vibration patterns — no cloud required.

**Bachelor Thesis Project | HTW Berlin | Electrical Engineering**

---

## Problem

Structural damage in bridges, aircraft, and industrial machinery 
causes billions in damage every year. Current monitoring systems 
are expensive, complex, and cloud-dependent.

This project builds a low-cost, autonomous embedded solution.

---

## System Overview

Vibration Sensor → ESP32 → FFT Analysis → Damage Detection → WiFi Alert

---

## Roadmap

| Semester | Goal | Status |
|----------|------|--------|
| 3 | Hardware setup + first vibration measurement | 🔄 In Progress |
| 4 | FFT signal analysis + damage classification | 📅 Planned |
| 5 | Automation + TinyML data collection | 📅 Planned |
| 6 | Bachelor Thesis — complete system | 🎯 Target |

---

## Hardware (Semester 3)

| Component | Purpose | Status |
|-----------|---------|--------|
| ESP32 Development Board | Main microcontroller | ✅ Available |
| ADXL345 Accelerometer | Vibration measurement | 🔄 Ordered |
| Metal plate | Test object | 🔄 Ordered |

---

## Repository Structure

| Folder | Content |
|--------|---------|
| firmware/ | ESP32 source code |
| hardware/ | Schematics and photos |
| data/ | Measurements and analysis |
| docs/ | Semester reports |

---

## Technologies

ESP32 · C++ · Arduino IDE · FFT · TinyML · Edge Impulse · Python

---

## Author

**Electrical Engineering Student — HTW Berlin**  
3rd Semester | Started: June 2026

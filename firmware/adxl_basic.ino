/*
 * Sensortest.ino
 * SHM-ESP32 Projekt — Semester 3
 * 
 * Zweck: Beschleunigungsmessung mit ADXL345 über I2C
 * Autor: Atekeh Motamedimoghaddam
 * Datum: 09.08.2026
 */

// --- Bibliotheken ---
// Wire.h → I2C-Protokoll für Kommunikation zwischen ESP32 und ADXL345
#include <Wire.h>

// Adafruit_Sensor.h → Basis-Bibliothek, definiert sensors_event_t
#include <Adafruit_Sensor.h>

/* 
 * Adafruit_ADXL345_U.h — Sensor-spezifische Bibliothek
 * Ermöglicht:
 * - accel.begin()     → Sensor initialisieren
 * - accel.getEvent()  → Beschleunigungswerte in X, Y, Z lesen
 * Kommuniziert automatisch über I2C, rechnet Rohdaten in m/s² um
 */
#include <Adafruit_ADXL345_U.h>

// --- Sensor-Objekt erstellen ---
// 12345 = beliebige Sensor-ID (relevant nur bei mehreren Sensoren)
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);


void setup() {
  // Serielle Kommunikation starten
  // 115200 Baud = Standard für ESP32
  Serial.begin(115200);

  // Sensor initialisieren und prüfen ob er gefunden wird
  if (!accel.begin()) {
    Serial.println("ADXL345 nicht gefunden! Verkabelung prüfen.");
    while (1); // Programm stoppen bei Fehler
  }

  Serial.println("ADXL345 bereit!");

  // Messbereich auf ±2g setzen — höchste Präzision (3,9 mg/LSB)
  // Ausreichend für Vibrationsmessung am Aluminiumrohr
  accel.setRange(ADXL345_RANGE_2_G);
}


void loop() {
  // Leere "Box" für Messwerte erstellen
  sensors_event_t measuredValue;

  // Box mit aktuellen Sensordaten füllen
  accel.getEvent(&measuredValue);

  // --- AUSGABE FÜR SERIAL MONITOR ---
  Serial.print("X: "); Serial.print(measuredValue.acceleration.x);
  Serial.print(" Y: "); Serial.print(measuredValue.acceleration.y);
  Serial.print(" Z: "); Serial.println(measuredValue.acceleration.z);
  
  delay(500);

  // --- ALTERNATIVE: AUSGABE FÜR SERIAL PLOTTER ---
  // Zum Aktivieren: Kommentare (//) unten entfernen,
  // und Code oben (Serial Monitor Version) auskommentieren
  //
  // Serial.print(measuredValue.acceleration.x);
  // Serial.print(",");
  // Serial.print(measuredValue.acceleration.y);
  // Serial.print(",");
  // Serial.println(measuredValue.acceleration.z);
  // delay(50); // schneller für flüssigere Kurve
}





#include <Wire.h>   //I2C Bibliothek von Arduino ...Wire.h->I2C-> Protokoll->ADXL345
/*Ohne Wire.h: 
 ESP32 und ADXL345 verstehen sich nicht
Mit Wire.h:   ESP32 sendet Befehle →   ADXL345 antwortet mit Daten*/
#include<Adafruit_ADXL345_U.h>
/* Adafruit_ADXL345_U.h — Bibliothek für den ADXL345 Sensor
Diese Bibliothek macht folgendes:
 1. Kommuniziert automatisch über I2C mit dem ADXL345
 2. Liest Rohdaten (0-4095) und wandelt sie in m/s² um
 3. Stellt einfache Funktionen bereit:
    - accel.begin()     → Sensor starten und prüfen ob er gefunden wird
   - accel.getEvent()  → aktuelle Beschleunigung in X, Y, Z lesen
Ohne diese Bibliothek müsstest du die I2C Befehle manuell in Binärcode schreiben — sehr kompliziert*/

Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

void setup() {
 Serial.begin(115200);
 /* Serial.begin(115200) — Kommunikationsgeschwindigkeit zwischen ESP32 und PC
Einheit: Baud = Bits pro Sekunde
 Warum 115200?
— Standard für ESP32 und Arduino Projekte
— Schnell genug für Sensordaten
 — Stabil und fehlerfrei bei USB Verbindung

— es sind festgelegte Standardwerte:
9600    → sehr langsam, alte Geräte
57600   → mittel
115200  → Standard ESP32 ✓
230400  → schnell
921600  → sehr schnell, manchmal instabil*/
if (!accel.begin()) {
    Serial.println("ADXL345 nicht gefunden!");
    while (1);
  }
  Serial.println("ADXL345 bereit!");
}



void loop() {
  sensors_event_t measuredValue;

  // sensors_event_t — ein Datentyp (struct) aus der 
// Adafruit Unified Sensor Bibliothek
//
// Was ist ein struct?
// — Eine Box die mehrere Werte zusammen speichert
// — Wie eine Tabelle mit mehreren Feldern
//
// sensors_event_t enthält:
// — measuredValue.acceleration.x  → X-Wert in m/s²
// — measuredValue.acceleration.y  → Y-Wert in m/s²
// — measuredValue.acceleration.z  → Z-Wert in m/s²
// — measuredValue.timestamp       → Zeitstempel der Messung
// — measuredValue.type            → Sensor-Typ (Beschleunigung)
//

// mit struct → alles in einer Box:
//   sensors_event_t measuredValue;
//   measuredValue.acceleration.x  → ordentlich ✓
//
// man gibt die leere Box an getEvent() 
// → getEvent() füllt sie mit aktuellen Messwerten
// → du liest die Werte aus der Box
  accel.getEvent(&measuredValue);

  
  //COde für Serialmonitor :
  
  //Serial.print("X: "); Serial.print(measuredValue.acceleration.x);
  //Serial.print(" Y: "); Serial.print(measuredValue.acceleration.y);
 // Serial.print(" Z: "); Serial.println(measuredValue.acceleration.z);
  
  //delay(1000);


  //Code für Serial Plotter 
  Serial.print(measuredValue.acceleration.x);
  Serial.print(",");
  Serial.print(measuredValue.acceleration.y);
  Serial.print(",");
  Serial.println(measuredValue.acceleration.z);
  
  delay(50); // schneller für bessere Kurve
}







# Komponenten 


|        Komponente               |             Spezifikation             |
|---------------------------------|---------------------------------------|
|     Mikrocontroller             |        ESP32 Dev Module, 3,3V         |
|      Beschleunigungssensor      |.       ADXL345, ±2g, 13-Bit, I2C      |
|     Testkörper                  |        Aluminiumrohr                  |
|     Entwicklungsumgebung        |        Arduino IDE                    |
|     Breadboard                  |        830 Punkte                     |
|     Verbindungskabel            |        Jumper Kabel (Male-Female)     |
|     Datenkabel                  |        USB Micro — Datenkabel         |
|     Rechner                     |        MacBook, macOS                 |








# Schaltplan 



<img width="318" height="300" alt="versuchsaufbau" src="https://github.com/user-attachments/assets/819cf6b3-dc57-4311-91f9-229d5871979a" />


Abb. 1: Schaltungsdiagramm ESP32 + ADXL345 (I2C)Erstellt mit Wokwi Circuit Simulator (wokwi.com)  

Hinweis: MPU-6050 als Darstellungsersatz für ADXL345 verwendet, da ADXL345 im Simulator nicht verfügbar ist. Verschaltung ist identisch. 

 


<img width="350" height="366" alt="realversuchsaufbau" src="https://github.com/user-attachments/assets/923e1e06-fba5-42dd-ab62-481f69b344bc" />

Abb. 2: Realer Versuchsaufbau — ESP32 mit ADXL345 (GY-291Modul) auf Breadboard Verschaltung:
VCC→ 3.3V | GND → GND | SDA → GPIO 21 | SCL → GPIO 22  









# Befestigung des Sensors am Testkörper 

Das Aluminiumrohr wurde mit einem Klebeband am Sensor befestigt. Dabei wurde beobachtet, dass für die korrekte Erfassung des Vibrationssignals ohne Störeinflüsse sowohl das Breadboard als auch das Rohr fest positioniert sein müssen — jede zusätzliche Bewegung des Aufbaus führt zu Störsignalen, die vom eigentlichen Impulssignal nicht mehr eindeutig zu unterscheiden sind. 

Eine feste, spielfreie Verbindung zwischen Sensor und Testkörper ist somit Voraussetzung für eine zuverlässige Messung. 







 

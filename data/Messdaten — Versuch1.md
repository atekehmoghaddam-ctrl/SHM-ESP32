
## Messdaten — Versuch 1

Rohdaten aus den Impulsmessungen (Klopftest) sowie 
Referenzwerte im Ruhezustand.
Messwerte während der Impuls [m/s^2]:

|    Impuls  |     x     |   y    |    z    |
|------------|-----------|--------|---------|
|      1     |  -0,78    |  0,75  |   3,49  |
|      2     |  1,73     |  4,82  |  -16,70 |
|      3     |  0,39     |  2,47  |   -6,83 |

Ruhezustand(Refrenzwert): X :0,39 | y: 0,94 | Z: -10,36

# Zusätzliche Visualisierung — Python Live-Plot

Zur ergänzenden Kontrolle wurden die Beschleunigungsdaten 
in einer separaten Messung mittels Python (pyserial, 
matplotlib) live visualisiert.

<img width="1288" height="950" alt="versuch1_plot_python" src="https://github.com/user-attachments/assets/64222476-7c0a-4c5a-8146-ccf292bb88fd" />


Live-Kurve der Beschleunigung (X, Y, Z) während 
dreier Klopfimpulse auf das Aluminiumrohr. Die drei sichtbaren 
Ausschläge entsprechen den Impulsen in der obigen Tabelle.

Hinweis: Die absoluten Werte dieser Messung weichen leicht 
von der dokumentierten Tabelle ab, da es sich um einen 
separaten Messzeitpunkt mit manuell (nicht reproduzierbar) 
appliziertem Klopfimpuls handelt (siehe Fehlerquellen, 
docs/versuch1_protokoll.md, Kapitel 5.2).

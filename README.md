# 🍋 Lime 🍋

C++ Übungen aus dem Buch: <br>
***Objekorientiertes Programmieren von Anfang an*** <br>
von Helmut Erlenkötter [ISBN - 3-499-60077-3]

## Kompilieren mit g++
``` 
g++ bsp10007.cpp -o b7
```
## 👻 bsp4 - Datentyp Char(Zeichen)
Werte der Buchstaben sind in der ASCII code Tabelle zu finden
```
A=65
B=66
```
Da das Addieren zweier Zeichen keinen Sinn macht, geht cout
davon aus, dass die Werte dieser beiden Variablen zusammengezählt
werden sollen, und gibt dann den so erhaltenen numerischen Wert 131 aus.


## 📺 bsp7 - Datentypen Konvertieren mit static_cast
### Ganzzahl
- Integer (16bit)
### Fließkommazahl
- float(32bit)
- double(64bit)


## 📏 bsp9 - Der Operator sizeof

Der Operator sizeof ermittelt die Größe eines Datenobjektes. Er dient dazu,
in Programme maschienenabhängige Datengrößen zu ermitteln.Soll beispielsweise
für int-Wert speicherplatz angefordert werden, kann  mit sizeof ermittelt werden,
wie groß int auf diesem speziellen System ist.Der Operator sizeof liefert seinem Wert
nicht während des Programmlaufs, sondern bereits während des Complierens!



## 📰 bsp10 - Felder und Zeichenketten (Array)
 Felder dienen dazu, eine Anzahl von Werten gleichen Types 
 zu speichern. Das können die Geburtsdaten einer Klasse,
 die Tagestemperaturen eines Jahres oder der monatliche 
 Umsatz für ein Jahr sein. 


 ## 🔤 bsp13 - Array 
 Das Array wort wird mit 10 Elementen initialisiert.
 In die ersten 5 Elementen werden die Buchstaben B-I-L-D und die Binäre Null geschrieben.



 ## ⏰ bsp15 - Strukturen 
 Das Programm deklaiert eine Struktur, definiert eine Variable 
 mit dem Typ dieser Struktur, weist den einzelnen Komponenten der Variablen Werte
 zu und druckt diese zur Kontrolle wieder aus.


 ##  ☑️ bsp17 
 In das Programm lesen wir eine Zahl ein. Das Pprogramm prüft, 
 ob die Zahl größer, kleiner oder genauso groß ist wie 10.


 ## ⭐ bsp18 
 In das Programm lesen wir zwei Ganzzahlen ein.
 Das Programm prüft ob die Zahlen gleich oder Ungleich sind.

 ## 🚡 bsp20
 In das Programm lesen wir ein Zeichen ein. Mit der switch-case 
 Anweisung wird eine Fallunterscheidung  durchgeführt. 
 Abhängig von der Eingabe wird eine Ausgabe erzeugt.

// bsp10017.cpp
#include <iostream>
using namespace std;

int main() {
	// Variable wert wird erzeugt
	double wert=0.0;
	// Ausgabe auf dem Bildschirm
	cout << "\nBitte eine Zahl eingeben: ";
    // Tastatureingabe für Variable
	cin >> wert;
	// Abfrage von Wert=10?
	if(wert == 10.0)
	  // Ausgabe von Wert=10!
	  cout << "Der Wert ist zehn. \n";
	// Abfrage Wert ist ungleich 10
	else
    // Abfrage Wert über 10?
    if(wert > 10.0)
	     // Ausgabe Wert größer 10 
	      cout << "Der Wert ist groesser als zehn. \n";
	// Wert ist kleiner 10
	else
	      // Ausgabe Wert ist kleiner als 10
	      cout << "Der Wert ist kleiner als zehn.  \n";
	 return 0;
}

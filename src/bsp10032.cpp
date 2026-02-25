// bsp10031.cpp
#include <iostream>
using namespace std;

int main() {
    char einZeichen = 'A';     
    double eineZahl  = 254.131;

    char* ZeigerAufEinZeichen = &einZeichen;
    double* ZeigerAufEineZahl = &eineZahl;

    //Adressoperator '&' zeigt die Adresse der Variablen an nicht den Wert
    //char wird als Zahl ausgegeben, deshalb casten wir den Zeiger auf char in einen void Zeiger um die Adresse anzuzeigen
    cout << "\n" << einZeichen <<" hat die Adresse " <<  (void*)&einZeichen;
    cout << "\n" << eineZahl <<" hat die Adresse " << &eineZahl << endl;
    
    return 0;
}

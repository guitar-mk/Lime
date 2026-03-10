// bsp10034.cpp
#include <iostream>
using namespace std;

void tausche(int *, int *);  //Prototyp

void tausche(int *a, int *b) {
    int temp = *a; // Wert von a in temp speichern
    *a = *b;       // Wert von b in a speichern
    *b = temp;     // Wert von temp (ursprünglicher a) in b speichern
}

int main() {
    int x = 5, y = 10;
    cout << "Vor dem Tausch: x = " << x << ", y = " << y << endl;
    tausche(&x, &y); // Adressen von x und y übergeben
    cout << "Nach dem Tausch: x = " << x << ", y = " << y << endl;
    return 0;
}
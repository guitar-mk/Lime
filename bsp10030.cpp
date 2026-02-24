// bsp10030.cpp
#include <iostream>
using namespace std;

int zaehler(void) ; // Prototyp
void eins(void) ;   // Prototyp
void zwei(void);    // Prototyp

int xyz=22;         // globale Variable

int main() {
	for (int i=0; i<8; i++)
		cout << "\n" << zaehler();
	eins();
	zwei();
	cout << "\n XYZ hat den Wert" << xyz << endl;
	return 0;
}

int zaehler() {
	static int wert=999;
	wert++;
	return wert;
}

void eins(){
	xyz++;
}

void zwei() {
	xyz++;
}	

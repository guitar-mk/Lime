//bsp10021.cpp
#include <iostream>
using namespace std;

int main()   
{
	int i;
	
	cout << "\n\tF O R   -   S C H L E I F E N ";
	cout << "\n";
	for (i=0; i<=76; i++) {
		cout << "=";
	}
		
	cout << "\nErste Schleife: ";
	for (i=1; i<=23; i++) {
		cout << i << " ";
	}
	cout << "\nZweit Schleife: ";
	for (; i>1; i--) {
		cout << i << " ";
	}
	
	cout << "\n";
	for (i=0; i<=76; i++) {
		cout << "=";
	}
	
	cout << "\n";
	return 0;
}
	
	

//bsp 10023.cpp
#include <iostream>
using namespace std;

int main() 
{
	int zaehler=1;
	//Kopfgesteuerte while Schleife
	cout << "\n";
	while (zaehler < 5) 
	{
		cout << zaehler << " ";
		zaehler++;
	}
	
	//Fußgesteuerte do-while Schleife
	do 
	{
		cout << "\nBitte eine Zahl eingeben (0=Ende) ";
		cin >> zaehler;
	}	while (zaehler != 0);
	
	
	return 0;
}




































































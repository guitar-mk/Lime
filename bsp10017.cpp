// bsp10017.cpp
#include <iostream>
using namespace std;

int main() {
	double wert=0.0;
	cout << "\nBitte eine Zahl eingeben: ";

	cin >> wert;
	if(wert == 10.0)
	  cout << "Der Wert ist zehn. \n";
	  else
	    if(wert > 10.0)
	      cout << "Der Wert ist groesser als zehn. \n";
	    else
	      cout << "Der Wert ist kleiner als zehn.  \n";
	 return 0;
}

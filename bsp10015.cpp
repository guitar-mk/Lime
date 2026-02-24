//bsp10015.cpp
#include <iostream>
using namespace std;
int main() {
	struct artikel {
	int artNr;
	double umsatz;
  };
  artikel Stift;
  Stift.artNr=2277;
  Stift.umsatz=2345.85;
  cout << "\n" << Stift.artNr;
  cout << "\n" << Stift.umsatz << "\n";
	artikel Buch;
	Stift.artNr=67;
	Stift.umsatz=100;
	cout << "\n" << Stift.artNr;
	cout << "\n" << Stift.umsatz << "\n";
  return 0;
}  


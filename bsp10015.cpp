//bsp10015.cpp
#include <iostream>
using namespace std;
int main() {
  struct artikel {
	int artNr;

	double umsatz;
  };
  artikel xyz;
  xyz.artNr=2277;
  xyz.umsatz=2345.85;
  cout << "\n" << xyz.artNr;
  cout << "\n" << xyz.umsatz << "\n";
  return 0;
}  


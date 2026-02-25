// bsp10007.cpp
#include <iostream>
using namespace std;

int main() {
	int wert1;
	float wert2;
	double wert3;
	 
	wert1=809;
	wert2=8.779;
	wert3=wert1+wert2;
	cout << "\n" << wert3;
	//konvertierung von wert2 (float zu integer)
	wert3=wert1 + static_cast<int>(wert2);
	cout << "\n" << wert3 << "\n";
	return 0;
  }
 

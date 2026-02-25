//bsp10020.cpp
#include <iostream>
using namespace std;

int main () 
{
	char zeichen;

	cout << "Bitte geben Sie einen Buchstaben ein :";
	cin >> zeichen;

	switch(zeichen) 
	{
		case'A':
		case'a':
			cout << "Buchstabe A \n";
			break;

		case'B':
		case'b':
			cout << "Buchstabe B \n";
			break;

		case 'C':
		case 'c':
			cout << "Bucstabe C \n";
			break;

		default:
			cout << "Kenn ich nicht! \n";
	}   
    return 0;
}


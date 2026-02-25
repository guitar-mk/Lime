// bsp10033.cpp
#include <iostream>
using namespace std;

void text2Ascii(char *);  //Prototyp

void text2Ascii(char * text) {
while(*text) {
    cout << " " << static_cast<int>(*text);
    text++;
}
cout << "\n";
}

int main() {
    char zeile[] = "Hello World";
    cout << "Die ASCII-Werte des Textes \n \"" << zeile << "\":\n ";
    text2Ascii(zeile);
    return 0;
}

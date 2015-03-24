// Dateiname: main.cpp
// // Autoren: Wolfram Ladurner <wolait01@hs-esslingen.de>
// //          Moritz Frenzel <mofrit01@hs-esslingen.de>
// // Beschreibung: output formatting 
// // Datum: 2015/03/22 - 2015/03/22
// // Aufwand: 10 Min.
// // Modifikationen:
//
#include <string>
#include <iomanip> 
#include <iostream> 
using namespace std;

int main() {
	double d = 1.234;
	cout << "Nr  Oct  Hex String  Fixed     Scientific " << endl;
	for (int k = 1; k < 11; k++) {
		cout << right << setw(2) << dec << noshowbase << k;
		cout << right << setw(5) << oct << showbase << k;
		cout << right << setw(5) << hex << showbase  << k << " ";
		cout << left  << setw(7) << setfill(char('+')) << string(k % 5 + 1, '*') << setfill(' ') <<" ";
		cout << internal << setw(9) << fixed << showpos << setprecision(3)  << d << noshowpos;
		cout << right << setw(12) << scientific << setprecision(3)  << d;
		d = d*-2;
		cout << endl;
	}
	return 0;
}

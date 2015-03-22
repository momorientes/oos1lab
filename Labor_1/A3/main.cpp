// Dateiname: main.cpp
// Autoren: Wolfram Ladurner <wolait01@hs-esslingen.de>
//          Moritz Frenzel <mofrit01@hs-esslingen.de>
// Beschreibung: Labyrinth-generator
// Datum: 2015/03/22 - 2015/03/22
// Aufwand: 10 Min.
// Modifikationen:

#include <iostream>
#include <curses.h>
#include <cstring>

using namespace std;

// Größe des Labyrinths
const int kZeilen = 11;
const int kSpalten = 11;

// Zeichen, die im Labyrinth vorkommen können,
// NL = new line, EOS = end of string
enum Symbole { MAUER = '#', WEG = ' ', MUENZE = ':', NL = '\n', 
	           EOS = '\0', ICH = 'X', GEIST = 'G' };

// Das Labyrinth als char-Array
// Die vorletzte Spalte speichert ein Zeilenendezeichen \n
// und die letzte ein \0-Zeichen, damit die Ausgabe leichter wird.
char labyrinth[kZeilen][kSpalten + 2];

// Labyrinth mit # füllen
void initialisieren() {
     for(auto& row : labyrinth)
     {
        strcpy(row, string(11, MAUER).c_str());
        row[11] = NL;
        row[12] = EOS;
     }
}

// Labyrinth auf dem Bildschirm ausgeben
void drucken() {
	// Console frei machen
	system("clear");
	// Labyrinth ausgeben

    for(auto& row: labyrinth)
    {
        cout << row;
    }



}

// Hilfsfunktion max
int max(int x, int y) {
	return (x <= y) ? y : x;
}

// Hilfsfunktion min
int min(int x, int y) {
	return (x <= y) ? x : y;
}

// Durch Herumlaufen werden Wege im Labyrinth erzeugt
// ASCII-Wert der Tasten: oben 72, links 75, rechts 77, unten 80
void erzeugen() {
	char c = 'x';
	int posx = kSpalten / 2;
	int posy = kZeilen / 2;
	labyrinth[posy][posx] = ICH;
    noecho();
	drucken();
	while (c != 'q') {
		drucken();
		cout << "Laufen mit Pfeiltasten. Beenden mit q." << endl;
		labyrinth[posy][posx] = WEG;
		while( ERR == (c = getch()));
		switch (int(c)) {
			// oben
		case 72: posy = max(1, posy - 1); break;
			// links
		case 75: posx = max(1, posx - 1); break;
			// rechts
		case 77: posx = min(kSpalten - 2, posx + 1); break;
			// unten
		case 80: posy = min(kZeilen - 2, posy + 1); break;
			// q = quit
		case 113: break;
		}
		labyrinth[posy][posx] = ICH;
	}
}

int main() {
	initialisieren();
	drucken();
	erzeugen();
}

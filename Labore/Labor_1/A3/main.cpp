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
	erase();

	// Labyrinth ausgeben
    for(auto& row: labyrinth)
    {
        printw(row);
    }
	 refresh();
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
void erzeugen() {
	int c = 'x';
	int posx = kSpalten / 2;
	int posy = kZeilen / 2;

	labyrinth[posy][posx] = ICH;
	while (c != 'q') {
		drucken();
		// cout << "Laufen mit Pfeiltasten. Beenden mit q." << endl;
		printw("Laufen mit Pfeiltasten. Beenden mit q.\n");

		labyrinth[posy][posx] = WEG;
		c = getch();
		switch (c) {
			// oben
		case KEY_UP: posy = max(1, posy - 1); break;
			// links
		case KEY_LEFT: posx = max(1, posx - 1); break;
			// rechts
		case KEY_RIGHT: posx = min(kSpalten - 2, posx + 1); break;
			// unten
		case KEY_DOWN: posy = min(kZeilen - 2, posy + 1); break;
			// q = quit
		case 'q': break;
		}
		labyrinth[posy][posx] = ICH;
	}
}

int main() {
	// curses-screen initialisieren
	initscr();
	keypad(stdscr, TRUE);

	initialisieren();
	drucken();
	erzeugen();

	endwin();
}

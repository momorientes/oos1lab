#include <iostream>
#include <fstream>
#include <cstring>
#include <curses.h>
#include "Labyrinth.hpp"

using namespace std;

Labyrinth::Labyrinth()
{
	this->labZeilen = kZeilen;
	this->labSpalten = kSpalten;
	this->labAnzGeister = 0;
	
	this->initialisieren();
}

void Labyrinth::initialisieren()
{
	for(auto& row: this->lab)
	{
		strcpy(row, string(11, MAUER).c_str());
		row[11] = NL;
		row[12] = EOS;
	}
}

void Labyrinth::drucken()
{
	erase();
	// Labyrinth ausgeben
	for(auto& row: this->lab)
		printw(row);
	
	refresh();
}

void Labyrinth::erzeugen()
{
	int c = 'x';
	int posx = this->labSpalten / 2;
	int posy = this->labZeilen / 2;

	this->lab[posy][posx] = ICH;
	while (c != 'q') {
		this->drucken();
		printw("Laufen mit Pfeiltasten. Beenden mit q.\n");

		this->lab[posy][posx] = WEG;
		c = getch();
		switch (c) {
			// oben
		case KEY_UP: posy = max(1, posy - 1); break;
			// links
		case KEY_LEFT: posx = max(1, posx - 1); break;
			// rechts
		case KEY_RIGHT: posx = min(labSpalten - 2, posx + 1); break;
			// unten
		case KEY_DOWN: posy = min(labZeilen - 2, posy + 1); break;
			// q = quit
		case 'q': break;
		}
		this->lab[posy][posx] = ICH;
	}
}

int Labyrinth::getZeilen()
{
	return this->labZeilen;
}

int Labyrinth::getSpalten()
{
	return this->labSpalten;
}

int Labyrinth::getAnzGeister()
{
	return this->labAnzGeister;
}

int Labyrinth::getMuenzen()
{
	return this->muenzen;
}

void Labyrinth::legeMuenzen()
{
	for (auto& row: this->lab) {
		for (auto& col: row) {
			if (col == WEG) { 
				col = MUENZE;
				this->muenzen++;
			}
		}
	}
}

void Labyrinth::zeichneChar(char c, Position pos)
{
	this->lab[pos.posy][pos.posx] = c;
}

void Labyrinth::zeichneChar(char c, Position posalt, Position posneu)
{
	this->zeichneChar(c, posneu);
	this->zeichneChar(WEG, posalt);
}

char Labyrinth::getZeichenAnPos(Position pos)
{
	return this->lab[pos.posy][pos.posx];
}

bool Labyrinth::istMuenzeAnPos(Position pos)
{
	return this->getZeichenAnPos(pos) == MUENZE;
}

// Labyrinth als Textdatei speichern
void Labyrinth::exportDatei(const char * dateiname)
{
	ofstream datei(dateiname);
	if (!datei) {
		cerr << "Kann Datei nicht oeffnen" << endl;
	}
	for (int i = 0; i < kZeilen; i++) {
		datei << lab[i];
	}
	datei.close();
}

// Labyrinth als Textdatei einlesen
void Labyrinth::importDatei(const char * dateiname)
{
	ifstream datei(dateiname);
	if (!datei) {
		cerr << "Kann Datei nicht oeffnen" << endl;
	}
	for (int i = 0; i < kZeilen; i++) {
		datei.getline(lab[i], kSpalten + 2);
		lab[i][kSpalten] = '\n';
		lab[i][kSpalten + 1] = '\0';
	}
	datei.close();
}

// Datei Spieler.cpp

#include "Spieler.hpp"
#include "Labyrinth.hpp"
#include <cstdlib>

// Konvertierstruktoren
Spieler::Spieler(const MyString& str): name(str), pos(0, 0), muenzen(0) {}
Spieler::Spieler(const char* str): name(str), pos(0, 0), muenzen(0) {}

// Position lesen/setzen
Position& Spieler::getPos()
{
	return pos;
}
void Spieler::setPos(Position& pos)
{
	this->pos = pos;
}

// Richtung setzen
void Spieler::setRichtung(Richtung dir)
{
	pos.r = dir;
}

// Anzahl Münzen lesen
int Spieler::getMuenzen()
{
	return muenzen;
}
// Anzahl Münzen inkrementieren
void Spieler::plusMuenze()
{
	muenzen++;
}
	
// Schritt im Labyrinth machen
Spieler& Spieler::schritt(Labyrinth& lab)
{
	this->pos = pos.schritt(lab); 
	return *this;
}

// Schrittrichtung automatisch wählen lassen
void Spieler::orientieren(Labyrinth& lab) {
	Position postmp = pos;
	// Eine von 4 Richtungen auswählen
	int rint = rand() % 4;
	postmp.r = Richtung(rint);
	while ((lab.getZeichenAnPos(postmp)) == MAUER) {
		rint = rand() % 4;
		postmp.r = Richtung(rint);
	}
	pos.r = Richtung(rint);
}


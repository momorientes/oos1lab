// Datei Spieler.hpp
#pragma once

#include "Position.hpp"
#include "Spieler.hpp"
#include "MyString.hpp"

class Spieler 
{
	MyString name;           // Name des Spielers
	Position pos;            // Position des Spielers
	int muenzen;              // Anzahl bereits gesammelter Münzen

public:
	// Kopierkonstruktoren
	Spieler(const MyString& str);
	Spieler(const char* str);

	// Position lesen/setzen
	Position& getPos();
	void setPos(Position& pos);
	// Richtung setzen
	void setRichtung(Richtung dir);
	// Anzahl Münzen lesen
	int getMuenzen();
	// Anzahl Münzen inkrementieren
	void plusMuenze();
	// Schritt im Labyrinth machen
	Spieler& schritt(Labyrinth& lab);
	// Orientieren im Labyrinth
	void orientieren(Labyrinth& lab);

	void spielen();
};


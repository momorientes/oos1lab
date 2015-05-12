// Bibliothek.cpp
#include "Bibliothek.hpp"

/*
// Anzahl der in der im Bibliothekskatalog verzeichneten Medien
	int anz;
	// maximale Anzahl der Medien im Katalog
	const int maxAnz;
	// Zeiger auf das Array der Zeiger auf die Medien im Katalog
	// Deshalb wird hier ein Doppelzeiger genutzt.
	Medium ** medien;
*/

// Standardkonstruktor
Bibliothek::Bibliothek(int maxAnz /*= 1000*/) : anz(0), maxAnz(maxAnz) {
	medien = new Medium*[maxAnz];
}

// Destruktor
Bibliothek::~Bibliothek() {
	// for (int i = 0; i < anz; i++)
	// 	delete medien[i];
	delete[] medien;
}

// Kopie eines Buches in den Katalog der Bibliothek eintragen
void Bibliothek::mediumBeschaffen(Buch& Buch) {
	if (anz >= maxAnz)
		return;
	medien[anz++] = new ::Buch(Buch);
}

// Kopie einer DVD in den Katalog der Bibliothek eintragen
void Bibliothek::mediumBeschaffen(DVD & d) {
	if (anz >= maxAnz)
		return;
	medien[anz++] = new DVD(d);
}

// alle Medien auf der Konsole ausgeben, 
// die im Titel das Suchwort enthalten
void Bibliothek::mediumSuchen(string suchwort) {
}

// im Medium mit der Nummer nr, die Person p als Ausleiher
// eintragen mit von-Datum d und bis-Datum d+p.ausleihdauer
void Bibliothek::mediumAusleihen(int nr, Person & p, Datum d) {
}

// alle Medien in der Konsole ausgeben
void Bibliothek::print() const {
	cout << endl;
	cout << "Bibliothekskatalog:" << endl;
	for (int i = 0; i < anz; i++) {
		Medium *m = medien[i];
		if (m->getTyp() == "Buch")
			((Buch*)m)->print();
		else if (m->getTyp() == "DVD")
			((DVD*)m)->print();
		else
			m->print();
	}
}


// Bibliothek.cpp
#include "Bibliothek.hpp"

// Standardkonstruktor
Bibliothek::Bibliothek(int maxAnz /*= 1000*/) : anz(0), maxAnz(maxAnz) {
	medien = new Medium*[maxAnz];
}

// Destruktor
Bibliothek::~Bibliothek() {
	for (int i = 0; i < anz; i++)
		delete medien[i];
	delete[] medien;
}

// Kopie eines Buches in den Katalog der Bibliothek eintragen
void Bibliothek::mediumBeschaffen(Medium& m) {
	if (anz >= maxAnz)
		return;
	medien[anz++] = m.clone(); 
}

// Kopie einer DVD in den Katalog der Bibliothek eintragen
//void Bibliothek::mediumBeschaffen(DVD & d) {
//	if (anz >= maxAnz)
//		return;
//	medien[anz++] = new DVD(d);
//}

// alle Medien auf der Konsole ausgeben, 
// die im Titel das Suchwort enthalten
void Bibliothek::mediumSuchen(string suchwort) {
	cout << endl;
	cout << "Suche nach \"" << suchwort << "\". Ergebnis:" << endl;
	for (int i = 0; i < anz; i++) {
		if (medien[i]->getTitel().find(suchwort) != string::npos) {
			cout << endl;
			cout << "Medium " << i << ":" << endl; 
			medien[i]->print();
		}
	}
}

// im Medium mit der Nummer nr, die Person p als Ausleiher
// eintragen mit von-Datum d und bis-Datum d+p.ausleihdauer
void Bibliothek::mediumAusleihen(int nr, Person & p, Datum d) {
	medien[nr]->ausleihen(p, d, d + p.getAusleihdauer());
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


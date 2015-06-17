// Medium.cpp

#include "Medium.hpp"

// Konstruktor
Medium::Medium(string t /*= ""*/, string v /*= ""*/, int j /*= 0*/) : titel(t), verlag(v), jahr(j) {
	ausleiher = nullptr;
}

// Destruktor
Medium::~Medium() {
	if (ausleiher)
		delete ausleiher;
}

// Titel zurückliefern
string Medium::getTitel() const {
	return titel;
}

// Ausleiher zurückliefern
Person * Medium::getAusleiher() const {
	return ausleiher;
}

// das Medium "ausleihen", d.h. Person p, von und bis eintragen
void Medium::ausleihen(Person & p, Datum von, Datum bis) {
	if (ausleiher)
		delete ausleiher;
	ausleiher = new Person(p);
	this->von = von;
	this->bis = bis;
}

// Medium in der Konsole ausgeben
void Medium::print() const {
	cout << "Titel:       " << titel << endl;
	cout << "Verlag:      " << verlag << endl;
	cout << "Jahr:        " << jahr << endl;
	
	if (ausleiher)
		cout << "Ausleiher:   " << ausleiher->getName() 
			<< " von: " << von << " bis: " << bis << endl;
	else
		cout << "Ausleiher:   kein" << endl;
}


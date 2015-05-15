// Medium.cpp

#include "Medium.hpp"

// Konstruktor
Medium::Medium(string t /*= ""*/, string v /*= ""*/, int j /*= 0*/, 
		string typ /*= "undef"*/) : titel(t), verlag(v), jahr(j), typ(typ) {
	// ausleiher = new Person("kein");
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

// Typ zurückliefern
string Medium::getTyp() const {
	return typ;
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
	cout << "------------------------------------------------" << endl;
	cout << typ << endl;
	cout << "Titel:       " << titel << endl;
	cout << "Verlag:      " << verlag << endl;
	cout << "Jahr:        " << jahr << endl;
	
	if (ausleiher)
		cout << "Ausleiher:   " << ausleiher->getName() 
			<< " von: " << von << " bis: " << bis << endl;
	else
		cout << "Ausleiher:   kein" << endl;
}


// Dozent.cpp
#include "Dozent.hpp"

// Standardkosntruktor
Dozent::Dozent(string name, int prfrNr) : Person(name, 4712), prfrNr(prfrNr) {
}

// Dozenten auf der Konsole ausgeben
void Dozent::print() const {
	Person::print();
	// FIXME
}


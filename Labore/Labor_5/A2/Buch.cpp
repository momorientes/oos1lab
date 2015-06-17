// Buch.cpp
#include "Buch.hpp"

// Standardkonstruktor
Buch::Buch(string t /*= ""*/, string a /*= ""*/, string v /*= ""*/, 
		int jahr /*= 0*/) : Medium(t, v, jahr, "Buch"), autor(a) {};

// das Buch auf der Konsole ausgeben
void Buch::print() const {
	Medium::print();
	cout << "Autor:       " << autor << endl;
}

Buch* Buch::clone() const {
    return new Buch(*this);
}

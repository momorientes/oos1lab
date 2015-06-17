// Buch.cpp
#include "Buch.hpp"

// Standardkonstruktor
Buch::Buch(string t /*= ""*/, string a /*= ""*/, string v /*= ""*/, 
		int jahr /*= 0*/) : Medium(t, v, jahr), autor(a) {};

// das Buch auf der Konsole ausgeben
void Buch::print() const {
	//cout << typeid(this).name() << endl;
    cout << "Buch" << endl;
	Medium::print();
	cout << "Autor:       " << autor << endl;
	cout << "------------------------------------------------" << endl;
}

Buch* Buch::clone() const {
    return new Buch(*this);
}

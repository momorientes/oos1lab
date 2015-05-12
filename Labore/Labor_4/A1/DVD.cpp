// DVD.cpp
#include "DVD.hpp"

// Standardkonstruktor
DVD::DVD(string t /*= ""*/, string v /*= ""*/, int j /*= 0*/, int d /*= 0*/) :
	Medium(t, v, j, "DVD"), dauer(d) {
	// FIXME
}

// die DVD auf der Konsole ausgeben
void DVD::print() const {
	Medium::print();
	cout << "Dauer:       " << dauer << endl;
}

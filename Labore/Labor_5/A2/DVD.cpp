// DVD.cpp
#include "DVD.hpp"

// Standardkonstruktor
DVD::DVD(string t /*= ""*/, string v /*= ""*/, int j /*= 0*/, int d /*= 0*/) :
	Medium(t, v, j), dauer(d) {
	// FIXME
}

// die DVD auf der Konsole ausgeben
void DVD::print() const {
    //cout << typeid(this).name() << endl;
    cout << "DVD" << endl;
	Medium::print();
	cout << "Dauer:       " << dauer << endl;
    cout << "------------------------------------------------" << endl;
}

DVD* DVD::clone() const {
    return new DVD(*this);
}

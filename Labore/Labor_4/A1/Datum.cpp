// Datum.cpp
#include "Datum.hpp"

// Standardkonstruktor
Datum::Datum(int t /*= 0*/, int m /*= 0*/, int j /*= 0*/) :
		tag(t), monat(m), jahr(j) {
}

// Konvertierkonstruktor für String
Datum::Datum(const string & s) {
	// FIXME
}

// Konvertierkonstruktor für C-String
Datum::Datum(const char *s) {
	// FIXME
}

// Operator + addiert eine Anzahl von Tagen zum Datum hinzu
Datum Datum::operator+(int tage) {
	// FIXME
}

// Ausgabeoperator <<, Ausgabe in dem Format tt.mm.jjjj
ostream & operator<<(ostream &, const Datum &) {
	// FIXME
}



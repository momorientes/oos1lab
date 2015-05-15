// Datum.cpp
#include <sstream>
#include <iomanip>
#include "Datum.hpp"

// Standardkonstruktor
Datum::Datum(int t /*= 0*/, int m /*= 0*/, int j /*= 0*/) :
		tag(t), monat(m), jahr(j) {
}

// Konvertierkonstruktor für String
Datum::Datum(const string & s) {
	// istringstream is(s);
	// char delim;
	
	// is >> tag >> delim >> monat >> delim >> jahr;
	struct tm t;
	
	if (strptime(s.c_str(), "%d.%m.%Y", &t)) {
		tag = t.tm_mday;
		monat = t.tm_mon + 1;
		jahr = t.tm_year + 1900;
	}
}

// Konvertierkonstruktor für C-String
Datum::Datum(const char *s) : Datum(string(s)) {}

// Operator + addiert eine Anzahl von Tagen zum Datum hinzu
Datum Datum::operator+(int tage) {
	struct tm t = {0};
	t.tm_year = jahr - 1900;
	t.tm_mon = monat - 1;
	t.tm_mday = tag;
	
	t.tm_mday += tage;
	mktime(&t); // normalisieren

	return Datum(t.tm_mday, t.tm_mon + 1, t.tm_year + 1900);
}

// Ausgabeoperator <<, Ausgabe in dem Format tt.mm.jjjj
ostream & operator<<(ostream &out, const Datum &d) {
	char buf[10+1];
	sprintf(buf, "%02d.%02d.%04d", d.tag, d.monat, d.jahr);
	// out << d.tag << "." << d.monat << "." << d.jahr;
	out << buf;
	return out;
}



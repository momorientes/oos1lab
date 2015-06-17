// Person.cpp
#include "Person.hpp"

// Standardkonstruktor
Person::Person(string name, int dauer /*= 0*/) :
		name(name), ausleihdauer(dauer) {}

// den Namen zurückliefern
string Person::getName() const {
	return name;
}

// die Ausleihdauer zurückliefern
int Person::getAusleihdauer() const {
	return ausleihdauer;
}

// die Person auf der Konsole ausgeben
void Person::print() const {
	cout << "Name:      " << name << endl;		
}



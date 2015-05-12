// Student.cpp
#include "Student.hpp"

// Standardkonstruktor
Student::Student(string name, int matNr) : Person(name, 4711), matNr(matNr) {
}

// Student auf der Konsole ausgeben
void Student::print() const {
	Person::print();
	// FIXME
}


#include <iostream>
#include "ObjectCounter.hpp"

extern bool debugConstructor;

unsigned int ObjectCounter::maxId = 0;
unsigned int ObjectCounter::number = 0;

ObjectCounter::ObjectCounter(): id(++maxId) {
	if (debugConstructor)
		std::cout << "Konstruktor der Klasse ObjectCounter, Objekt: " << getId()
			<< std::endl;
	number++;	
}

ObjectCounter::~ObjectCounter() {
	if (debugConstructor)
		std::cout << "Destruktor der Klasse ObjectCounter, Objekt: " << getId()
			<< std::endl;
		number--;
}

int ObjectCounter::getId() const {
	return id;
}

int ObjectCounter::getMaxId() {
	return maxId;
}

int ObjectCounter::getNumber() {
	return number;
}


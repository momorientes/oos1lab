#include "ObjectCounter.hpp"

int ObjectCounter::maxId = 1000;
int ObjectCounter::number = 0;
	
ObjectCounter::ObjectCounter(): id(++maxId) {
	number++;	
}

ObjectCounter::~ObjectCounter() {
	number--;
}

int ObjectCounter::getId() const {
	return id;
}

int ObjectCounter::getMaxId() const {
	return maxId;
}

int ObjectCounter::getNumber() const {
	return number;
}


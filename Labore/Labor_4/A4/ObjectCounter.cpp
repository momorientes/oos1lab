#include "ObjectCounter.hpp"

ObjectCounter::ObjectCounter(): id(++maxId) {
	number++;	
}

ObjectCounter::~ObjectCounter() {
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


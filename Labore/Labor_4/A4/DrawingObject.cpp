#include "DrawingObject.hpp"
#include <iostream>

DrawingObject::DrawingObject() {
	if (debugConstructor) 
		std::cout << "Konstruktor der Klasse DrawingObject, Objekt: " << getId() << std::endl;
}

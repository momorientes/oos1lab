#include "DrawingObject.hpp"

DrawingObject::DrawingObject() {
	if (debugConstructor) 
		cout << "Konstruktor der Klasse DrawingObject, Objekt: " << (int)&this;
}

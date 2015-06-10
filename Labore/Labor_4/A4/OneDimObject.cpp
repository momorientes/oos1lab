#include "OneDimObject.h"
#include <iostream>

OneDimeObject::OneDimObject() {
	if (debugConstructor)
		std::cout << "Konstruktor der Klasse OneDimObject, Objekt: " << (int)&this << std::endl;;
}

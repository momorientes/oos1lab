#include "OneDimObject.hpp"
#include <iostream>

OneDimObject::OneDimObject() {
	if (debugConstructor)
		std::cout << "Konstruktor der Klasse OneDimObject, Objekt: " << getId() << std::endl;;
}

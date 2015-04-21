#include <iomanip>
#include "Fahrzeug.hpp"

Fahrzeug::Fahrzeug(const char* kz): kz(kz), vin(zaehler++), km(0.0) {};

void Fahrzeug::fahren(double km) {
	this->km += km;
}

std::ostream& operator<<(std::ostream &stream, const Fahrzeug &fahrzeug) {
	return stream << "kz = " << fahrzeug.kz 
		<< "  VIN = " << fahrzeug.vin
		<< "  km = " << std::setprecision(1) << std::fixed << fahrzeug.km;
}

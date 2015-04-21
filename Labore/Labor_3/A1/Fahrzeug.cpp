#include <iomanip>
#include "Fahrzeug.hpp"

Fahrzeug::Fahrzeug(const char* kz): kz(kz), vin(++zaehler), km(0.0) {};

Fahrzeug::~Fahrzeug() {
	summeKm -= km;
}

void Fahrzeug::fahren(double km) {
	this->km += km;
	summeKm += km;
}

double Fahrzeug::getSummeKm() {
	return summeKm;
}

std::ostream& operator<<(std::ostream &stream, const Fahrzeug &fahrzeug) {
	return stream << "kz = " << fahrzeug.kz 
		<< "  VIN = " << fahrzeug.vin
		<< "  km = " << std::setprecision(1) << std::fixed << fahrzeug.km;
}

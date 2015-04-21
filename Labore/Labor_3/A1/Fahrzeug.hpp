#include <iostream>
#include "MyString.hpp"

class Fahrzeug {
	MyString kz;
	const int vin;
	static int zaehler;
	static double summeKm;
	double km;
public:
	Fahrzeug(const char* kz);
	~Fahrzeug();
	void fahren(double km);
	static double getSummeKm();
	friend std::ostream& operator<<(std::ostream& stream, const Fahrzeug &fahrzeug);
};

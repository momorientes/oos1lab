#include <iostream>
#include "MyString.hpp"

class Fahrzeug {
	MyString kz;
	const int vin;
	static int zaehler;
	double km;
public:
	Fahrzeug(const char* kz);
	void fahren(double km);
	friend std::ostream& operator<<(std::ostream& stream, const Fahrzeug &fahrzeug);
};

#include "Fahrzeug.hpp"

using namespace std;

int Fahrzeug::zaehler = 0;
double Fahrzeug::summeKm = 0.0;

int main() {
	Fahrzeug f1("ES - H 123");
	cout << f1 << endl;
	f1.fahren(101.5);
	cout << f1 << endl;
	{
		Fahrzeug f2("ES - M 4711");
		f2.fahren(10.57);
		cout << f2 << endl;
		cout << "Km Fuhrpark insgesamt: " << Fahrzeug::getSummeKm() << endl;
	}
	cout << "Km Fuhrpark insgesamt (ohne f2): " << f1.getSummeKm() << endl;

	return 0;
}

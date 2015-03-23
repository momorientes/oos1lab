// Dateiname: main.cpp
// Autoren: Wolfram Ladurner <wolait01@hs-esslingen.de>
//          Moritz Frenzel <mofrit01@hs-esslingen.de>
// Beschreibung: Berechnet den Flächeninhalte eines Trapezes
// Datum: 2015/03/23 - 2015/03/23
// Aufwand: 
// Modifikationen:

#include <iostream>
#include <cmath>

using namespace std;

// Hilfsfunktion Winkelumwandlung
inline float deg2rad(float deg)
{
	return deg * 3.14159265 / 180.0;
}

// Berechnet die Trapezfläche und gibt diese aus
void trapezFlaeche(float a, float b, float gamma, float c)
{
	float h = b * sin(deg2rad(gamma));
	float flaeche = .5 * (a + c) * h;
	cout << flaeche << endl;
}

// Parallelogramm, Rechteck
void trapezFlaeche(float a, float b, float gamma = 90.0)
{
	trapezFlaeche(a, b, gamma, a);	
}

// Quadrat
void trapezFlaeche(float a)
{
	trapezFlaeche(a, a);
}

// Hauptfunktion
int main()
{
	trapezFlaeche(2.0, 4.0, 45.0, 3.5);
	trapezFlaeche(3.0, 4.0, 45.0);
	trapezFlaeche(4.0, 5.0);
	trapezFlaeche(2.0);

	return 0;
}

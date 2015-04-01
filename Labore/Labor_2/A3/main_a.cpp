#include <iostream>
#include "Circle.hpp"
using namespace std;

// Hauptprogramm
int main_a(void)
{
	Point p;
	Circle c(p);
	cout << "Ausgabe 1:" << endl;
	p.print();
	c.print();
	p.setX(1.1);
	p.setY(2.2);
	c.setCentre(p);
	c.setRadius(3.3);
	cout << "Ausgabe 2:" << endl;
	p.print(false);
	cout << " == (" << p.getX() << ", " << p.getY() << ")"
		 << endl;
	c.print();
	p.move(1.0, 1.0);
	c.move(2.0, 2.0);
	cout << "Ausgabe 3:" << endl;
	p.print();
	c.print();
	return 0;
}

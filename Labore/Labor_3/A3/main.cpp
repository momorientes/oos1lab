#include <iostream>
#include <sstream>
#include "point.hpp"
#include "circle.hpp"
#include "Polygonline.hpp"
#include "main_strings.cpp"
#include "../A4/main_operatoren.cpp"

int main()
{
    using std::cout;
    using std::endl;
    Point p = Point(1.1,2.2);
    cout << p.toString() << endl;
    cout << p << endl;
    Circle c = Circle(p, 3.14);
    cout << c.toString() << endl;
    cout << c << endl;
	std::string s("   (1.3, 2.4) ist ein Punkt.");
	p = Point(s);
	std::istringstream is(s);
	is >> p;

	c = Circle("<(2.2, 4.4), 6.6>");
	cout << c.toString() << endl;
	cout << "main_strings:" << endl;
    main_strings();
	 cout << "/main_strings" << endl;

    cout << p.toString() << endl;
    Point p1(1, 1), p2(2, 2), p3(3, 3), p4(4, 4), p5(5, 5);
    Polygonline pl;
    pl.addPoint(p1);
    pl.addPoint(p2);
    pl.addPoint(p3);
    pl.addPoint(p4);
    pl.addPoint(p5);
    cout << pl.toString() << endl;
    cout << pl << endl;

	 // 3.3.2.f
	cout << "Bitte Objektstring eingeben: ";
	string in;
	getline(cin, in);
	switch (in.c_str()[0])
	{
	case '(': {
		Point ip = Point(in);
		cout << "Point: " << ip << endl;
		break;
	}

	case '<': {
		Circle ic = Circle(in);
		cout << "Circle: " << ic << endl;
		break;
	}

	case '|': {
		Polygonline il = Polygonline(in);
		cout << "Polygonline: " << il << endl;
		break;
	}

	default:
		cout << "ungültige Eingabe - '" << in << "'" << endl;
	}

	// 3.4
	cout << "3.4: " << endl;
	main_operatoren();
	cout << "/3.4" << endl;

	 return 0;
}

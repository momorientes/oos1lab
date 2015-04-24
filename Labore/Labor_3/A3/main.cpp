#include <iostream>
#include <sstream>
#include "point.hpp"
#include "circle.hpp"

int main()
{
    using std::cout;
    using std::endl;
    Point p = Point(1.1,2.2);
    cout << p.toString() << endl;
    Circle c = Circle(p, 3.14);
    cout << c.toString() << endl;
	 std::string s("   (1.3, 2.4) ist ein Punkt.");
	 p = Point(s);
	 std::istringstream is(s);
	 is >> p;
	 cout << p.toString() << endl;
    return 0;
}

#include <iostream>
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

    return 0;
}

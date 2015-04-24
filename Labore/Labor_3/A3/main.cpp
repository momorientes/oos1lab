#include <iostream>
#include "point.hpp"
#include "circle.hpp"
#include "Polygonline.hpp"

int main()
{
    using std::cout;
    using std::endl;
    Point p = Point(1.1,2.2);
    cout << p.toString() << endl;
    Circle c = Circle(p, 3.14);
    cout << c.toString() << endl;

    Point p1(1, 1), p2(2, 2), p3(3, 3), p4(4, 4), p5(5, 5);
    Polygonline pl;
    pl.addPoint(p1);
    pl.addPoint(p2);
    pl.addPoint(p3);
    pl.addPoint(p4);
    pl.addPoint(p5);
    cout << pl.toString() << endl;
    pl.print(false);

    return 0;
}

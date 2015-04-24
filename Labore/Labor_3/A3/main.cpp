#include <iostream>
#include "point.hpp"

int main()
{
    using std::cout;
    using std::endl;
    Point p = Point(1.1,2.2);
    cout << p.toString() << endl;

    return 0;
}

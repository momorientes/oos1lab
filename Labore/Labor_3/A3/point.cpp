#include "point.hpp"
#include <iostream>
#include <sstream>

Point::Point(double x/*=0*/, double y/*=0*/)
{
    this->x = x;
    this->y = y;
}

Point::Point(const std::string s) {
	float x = 0.0, y = 0.0;

	sscanf(s.substr(s.find("(")).c_str(), "(%f, %f)", &x, &y);

	this->x = x, this->y = y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getX() const
{
    return this->x;
}

double Point::getY() const
{
    return this->y;
}

void Point::move(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

void Point::print(bool endl /*=true*/) const
{
    std::cout << "(" << this->x << ", ";
    std::cout << this->y <<")"; 
    if(endl)
    {
        std::cout << std::endl;
    }
}

std::string Point::toString() const
{
    using namespace std;
    ostringstream out;
    out << "(" <<this->x << ", " << this->y << ")";
    return out.str();
}

std::istringstream& operator>>(std::istringstream & is, Point &p) {
	p = Point(is.str());
	return is;
}

std::ostream& operator<<(std::ostream& out, const Point& p)
{
    out << p.toString();
    return out;
}

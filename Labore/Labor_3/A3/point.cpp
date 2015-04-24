#include "point.hpp"
#include <iostream>
#include <sstream>

Point::Point(double x/*=0*/, double y/*=0*/)
{
    this->x = x;
    this->y = y;
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

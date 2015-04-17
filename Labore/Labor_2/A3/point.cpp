#include "point.hpp"
#include <iostream>

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

double Point::getX()
{
    return this->x;
}

double Point::getY()
{
    return this->y;
}

void Point::move(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

void Point::print(bool endl /*=true*/)
{
    std::cout << "(" << this->x << ", ";
    std::cout << this->y <<")"; 
    if(endl)
    {
        std::cout << std::endl;
    }
}

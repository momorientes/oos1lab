#include "circle.hpp"
#include <iostream>

Circle::Circle(Point centre/*=Point()*/, double radius /*=0*/)
{
    this->centre = centre;
    this->radius = radius;
}

void Circle::setCentre(Point centre)
{
    this->centre = centre;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

Point Circle::getCentre()
{
    return this->centre;
}

double Circle::getRadius()
{
    return this->radius;
}

void Circle::move(double dx, double dy)
{
    this->centre.move(dx, dy);
}

void Circle::print(bool endl/*=true*/)
{
    std::cout << "<";
    this->centre.print(false);
    std::cout << ", ";
    std::cout << this->radius << ">";
    if(endl)
    {
        std::cout << std::endl;
    }
}

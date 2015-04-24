#include <iostream>
#include <sstream>
#include "Polygonline.hpp"

// Konstruktoren
Polygonline::Polygonline() {
	start = nullptr;
	end = nullptr;
}
Polygonline::Polygonline(Point point) {
	start = new PlgElement(point);
	end = start;
}

// Destruktor
Polygonline::~Polygonline() {
	while (start != nullptr) {
		PlgElement* tmp = start->next;
		delete start;
		start = tmp;
	}
}

Polygonline& Polygonline::addPoint(Point point) {
	PlgElement* tmp = new PlgElement(point);
	if (start == nullptr) {
		start = tmp;
		end = tmp;
	} else {
		end->next = tmp;
		end = tmp;
	}

	return *this;
}

Polygonline& Polygonline::appendPolygonline(Polygonline& line) {
	PlgElement* tmp = line.start;
	while (tmp) {
		addPoint(tmp->point);
		tmp = tmp->next;
	}

	return *this;
}

Polygonline& Polygonline::move(int dx, int dy) {
	PlgElement* tmp = start;
	while (tmp) {
		tmp->point.move(dx, dy);
		tmp = tmp->next;
	}

	return *this;
}

Polygonline& Polygonline::print(bool endl /*= true*/) {

    std::cout << toString() << (endl ? "\n" : "");
	return *this;
}

std::string Polygonline::toString()
{
    std::ostringstream out;
    out << "|";
    PlgElement* tmp = this->start;
    while(tmp)
    {
        out << tmp->point.toString();
        if(tmp->next)
        {
            out << " - ";
        }
        tmp = tmp->next;
    }
    out << "|";
    return out.str();
}


#pragma once
#include <string> 
#include "PlgElement.hpp"

class Polygonline {
	PlgElement* start;
	PlgElement* end;

public:
	Polygonline();
	Polygonline(Point point);
	Polygonline(const std::string s);
	~Polygonline();

	Polygonline& addPoint(Point point);
	Polygonline& appendPolygonline(const Polygonline& line);
	Polygonline& move(int dx, int dy);
	Polygonline& print(bool endl = true);
	Polygonline& operator+(const Point &p);
	Polygonline& operator+(const Polygonline &l);
    std::string toString() const;
    friend std::ostream& operator<<(std::ostream&, const Polygonline&);
};

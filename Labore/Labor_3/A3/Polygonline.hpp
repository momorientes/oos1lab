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
	Polygonline& appendPolygonline(Polygonline& line);
	Polygonline& move(int dx, int dy);
	Polygonline& print(bool endl = true);
    std::string toString() const;
    friend std::ostream& operator<<(std::ostream&, const Polygonline&);
};

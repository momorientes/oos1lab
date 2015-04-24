#pragma once
#include "PlgElement.hpp"

class Polygonline {
	PlgElement* start;
	PlgElement* end;

public:
	Polygonline();
	Polygonline(Point point);
	~Polygonline();

	Polygonline& addPoint(Point point);
	Polygonline& appendPolygonline(Polygonline& line);
	Polygonline& move(int dx, int dy);
	Polygonline& print(bool endl = true);
    std::string toString();
};

#include "point.hpp"

struct PlgElement {
	Point point;
	PlgElement* next;

	PlgElement(Point point);
};

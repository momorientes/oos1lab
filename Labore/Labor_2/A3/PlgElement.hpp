#include "point.hpp"
#pragma once

struct PlgElement {
	Point point;
	PlgElement* next;

	PlgElement(Point point);
};

#include "PlgElement.hpp"

PlgElement::PlgElement(Point point) {
	this->point.setX(point.getX());
	this->point.setY(point.getY());
	this->next = nullptr;
}

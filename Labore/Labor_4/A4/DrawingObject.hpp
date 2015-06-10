#pragma once
#include "ObjectCounter.hpp"

bool debugConstructor = false;
class DrawingObject: public ObjectCounter
{
	public:
		DrawingObject();
};

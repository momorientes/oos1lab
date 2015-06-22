#pragma once
#include "ObjectCounter.hpp"
#include "MyData.hpp"

extern bool debugConstructor;

class DrawingObject: virtual public ObjectCounter, virtual public MyData
{
	public:
		DrawingObject();
		~DrawingObject();
};

#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0;
	height = 0;
}
Rectangle::Rectangle(double w, double h)
{
        (* this).width = w;
	(* this).height = h;
}
void Rectangle::setWidth(double w)
{
	(* this).width = w;
}
void Rectangle::setHeight(double h)
{
	(* this).height = h;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getArea()
{
	return height * width;
}
void Rectangle::swapByPointer(Rectangle& r2)
{
	Rectangle a = r2;
	r2 = *this;
	*this = a;
}
void Rectangle::swapByReference(Rectangle* r2)
{
	Rectangle a = *r2;
	*r2 = *this;
	*this = a;
}

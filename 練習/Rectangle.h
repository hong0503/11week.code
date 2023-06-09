#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
private:
	double width;
	double height;
public:
	Rectangle();
	Rectangle(double, double);
	void setWidth(double);
	void setHeight(double);
	double getWidth();
	double getHeight();
	double getArea();
	void swapByPointer(Rectangle&);
	void swapByReference(Rectangle*);
};
#endif

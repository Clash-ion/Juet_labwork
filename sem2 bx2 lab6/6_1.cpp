#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

class polar;
class rectangle
{
	float x, y;

  public:
	rectangle() {}
	rectangle(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	void display() { cout << "x = " << x << " y = " << y << endl; }
	int returnx() { return x; }
	int returny() { return y; }
	void operator=(polar);
};

class polar
{
	float radius, angle;

  public:
	polar() {}
	polar(float radius, float angle)
	{
		this->radius = radius;
		this->angle = angle;
	}
	void display() { cout << "radius = " << radius << " angle = " << angle << endl; }
	int returnradius() { return radius; }
	int returnangle() { return angle; }
	void operator=(rectangle r1)
	{
		int x = r1.returnx();
		int y = r1.returny();
		this->radius = sqrt(pow(x, 2) + pow(y, 2));
		this->angle = atan(y / x);
	}
};

void rectangle::operator=(polar p1)
{
	int radius_ = p1.returnradius();
	int angle_ = p1.returnangle();
	this->x = radius_ * cos(angle_);
	this->y = radius_ * sin(angle_);
}

float distance(polar p1, polar p2) { return sqrt(pow(p1.returnradius(), 2) + pow(p2.returnradius(), 2) - 2 * p1.returnradius() * p2.returnradius() * cos(p1.returnangle() - p2.returnangle())); }

float distance(rectangle r1, rectangle r2) { return pow(r1.returnx() - r2.returnx(), 2) + pow(r1.returny() - r2.returny(), 2); }

int main()
{
	rectangle a(2, 3), b(4, 6);
	polar c, d;
	c = a;
	d = b;
	cout << "distance is " << distance(a, b) << " in rectangular cordinates" << endl;
	cout << "distance is " << distance(c, d) << " in polar cordinates" << endl;
	return 0;
}
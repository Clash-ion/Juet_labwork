#include <iostream>
using std::cout;
using std::endl;
class FLOAT
{
	float x;

  public:
	FLOAT() {}
	FLOAT(float x) : x(x) {}
	FLOAT operator+(FLOAT y)
	{
		FLOAT temp;
		temp.x = x + y.x;
		return temp;
	}
	FLOAT operator-(FLOAT y)
	{
		FLOAT temp;
		temp.x = x - y.x;
		return temp;
	}
	FLOAT operator*(FLOAT y)
	{
		FLOAT temp;
		temp.x = x * y.x;
		return temp;
	}
	FLOAT operator/(FLOAT y)
	{
		FLOAT temp;
		try
		{
			if (y.x == 0)
			{
				throw y.x;
			}
		}
		catch (float x)
		{
			cout << "division by zero" << endl;
			return *this;
		}
		temp.x = x / y.x;
		return temp;
	}
	void display()
	{
		cout << x << endl;
	}
};
int main()
{
	FLOAT a(4), b(0), c, d, e, f;
	c = a + b;
	c.display();
	d = a - b;
	d.display();
	e = a * b;
	e.display();
	f = a / b;
	f.display();
	return 0;
}
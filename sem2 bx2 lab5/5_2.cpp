#include <iostream>
using std::cout;
using std::endl;
class parameters
{
	int x;
	int y;

  public:
	parameters()
	{
		cout << "Default constructor of parameter class called" << endl;
	}
	parameters(int x, int y) : x(x), y(y)
	{
		cout << "Constructor of parameter class called" << endl;
	}
	~parameters()
	{
		cout << "Destructor of parameter class called" << endl;
	}
	parameters(const parameters &a)
	{
		cout << "Copy constructor of parameter class called" << endl;
	}
};
class Rectangle
{
	parameters top_left;
	parameters bottom_right;

  public:
	Rectangle()
	{
	}
	Rectangle(parameters top_left, parameters bottom_right)
	{
		this->top_left = top_left;
		this->bottom_right = bottom_right;
		cout << "Constructor of rectangle class called" << endl;
	}
	~Rectangle()
	{
		cout << "Destructor of rectangle class called" << endl;
	}
};
int main()
{
	parameters tl(2, 3), br(4, 6);
	Rectangle(tl,br);
	return 0;
}
#include <iostream>

using std::cout;
using std::endl;

int hcf(int n1, int n2)
{
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	return n1;
}
class rational
{
	int numerator, denominator;

  public:
	void userinp(int n, int d)
	{
		numerator = n;
		if (!d)
		{
			cout << "Invalid Input" << endl;
			return;
		}
		denominator = d;
	}
	void display()
	{
		cout << numerator << "/" << denominator << endl;
	}
	rational operator+(rational n2)
	{
		rational temp;
		temp.numerator = (numerator * n2.denominator + denominator * n2.numerator);
		temp.denominator = (denominator * n2.denominator);
		int temphcf = hcf(temp.numerator, temp.denominator);
		temp.numerator /= temphcf;
		temp.denominator /= temphcf;
		return temp;
	}
	rational operator-(rational n2)
	{
		rational temp;
		int temphcf;
		temp.numerator = (numerator * n2.denominator - denominator * n2.numerator);
		temp.denominator = (denominator * n2.denominator);
		if (temp.numerator < 0)
		{
			temp.numerator *= -1;
			temphcf = hcf(temp.numerator, temp.denominator);
			temp.numerator *= -1;
			temp.numerator /= temphcf;
		}
		else
			temphcf = hcf(temp.numerator, temp.denominator);
		temp.denominator /= temphcf;
		return temp;
	}
	rational operator*(rational n2)
	{
		rational temp;
		temp.numerator = (numerator * n2.numerator);
		temp.denominator = (denominator * n2.denominator);
		int temphcf = hcf(temp.numerator, temp.denominator);
		temp.numerator /= temphcf;
		temp.denominator /= temphcf;
		return temp;
	}
	rational operator/(rational n2)
	{
		rational temp;
		temp.numerator = (numerator * n2.denominator);
		temp.denominator = (denominator * n2.numerator);
		int temphcf = hcf(temp.numerator, temp.denominator);
		temp.numerator /= temphcf;
		temp.denominator /= temphcf;
		return temp;
	}
};
int main()
{
	rational a, b, c;
	a.userinp(1, 2);
	a.display();
	b.userinp(9, 3);
	b.display();
	c = a - b;
	c.display();
	c = a + b;
	c.display();
	c = a * b;
	c.display();
	c = a / b;
	c.display();
	return 0;
}
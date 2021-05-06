#include <iostream>

using std::cout;
using std::endl;

class Distance
{
	float feet, inches;

  public:
	Distance()
	{
		feet = 0;
		inches = 0;
	}
	Distance(float feet, float inches)
	{
		this->feet = feet;
		this->inches = (int)inches % 12;
		this->feet += (inches - (int)inches % 12) / 12;
	}
	void Display()
	{
		cout << "feet = " << feet << endl;
		cout << "inches = " << inches << endl;
	}
	friend Distance operator+(Distance d1, Distance d2)
	{
		Distance temp;
		temp.inches = d1.inches + d2.inches;
		temp.feet = d1.feet + d2.feet + ((temp.inches - (int)temp.inches % 12) / 12);
		temp.inches = ((int)temp.inches % 12) + (temp.inches - (int)temp.inches);
		return temp;
	}
	friend Distance operator-(Distance d1, Distance d2)
	{
		Distance temp;
		temp.inches = d1.inches - d2.inches;
		temp.feet = d1.feet - d2.feet + ((temp.inches - (int)temp.inches % 12) / 12);
		temp.inches = ((int)temp.inches % 12) + (temp.inches - (int)temp.inches);
		return temp;
	}
	Distance operator+=(int num)
	{
		this->inches += num;
		this->feet += num;
		this->feet += (this->inches - ((int)this->inches % 12)) / 12;
		this->inches = (int)this->inches % 12;

		return *this;
	}
	Distance operator-=(int num)
	{
		this->inches -= num;
		this->feet -= num;
		return *this;
	}
	bool operator>(Distance d)
	{
		if (feet + (inches / 12) > d.feet + (d.inches) / 12)
			return true;
		return false;
	}
	bool operator<(Distance d)
	{
		if (feet + (inches / 12) < d.feet + (d.inches) / 12)
			return true;
		return false;
	}
};
int main()
{
	Distance a(1, 26), b(1, 20), sum, c(1, 1), d(1, 2), e;
	a.Display();
	b.Display();
	sum = a - b;
	sum.Display();
	c += 15;
	c.Display();
	d -= 12;
	d.Display();
	if (a > b)
		cout << "hello" << endl;
	if (b < a)
		cout << "world" << endl;
	if (b > a)
		cout << "okay" << endl;

	return 0;
}
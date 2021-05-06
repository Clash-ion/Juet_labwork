#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class DB;
class DM
{
	int meter;
	int centimeter;

  public:
	void getInput();
	friend void add_meter(DM, DB);
	friend void add_feet(DM, DB);
};
class DB
{
	int feet;
	int inch;

  public:
	void getInput();
	friend void add_meter(DM, DB);
	friend void add_feet(DM, DB);
};
int main()
{
	DM a;
	DB b;
	a.getInput();
	b.getInput();
	add_meter(a, b);
	add_feet(a, b);
	return 0;
}
void DM::getInput()
{
	cout << "Enter meter and centimeter : ";
	cin >> meter >> centimeter;
}
void DB::getInput()
{
	cout << "Enter feet and inch : ";
	cin >> feet >> inch;
}
void add_meter(DM m, DB f)
{
	float x = m.meter + (f.feet / 3.281);
	float y = m.centimeter + (x - (int)x) * 100 + (f.inch * 2.54);
	x += y / 100;
	y = ((int)y % 100);
	y += (x - (int)x) * 100;
	x = ((int)x);
	cout << "In meters " << x << " "
		 << "and centimeter " << y << endl;
}
void add_feet(DM m, DB f)
{
	float x = f.feet + (m.meter * 3.281);
	float y = f.inch + (x - (int)x) * 12 + (m.centimeter / 2.54);
	x += (y / 12);
	y = (int)y % 12;
	y += (x - (int)x) * 12;
	x = (int)x;
	cout << "In feets " << x << " "
		 << "and inches " << y << endl;
}

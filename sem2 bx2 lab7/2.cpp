#include <iostream>
using std::cout;
using std::endl;
using std::string;
class student
{
  protected:
	string name;
	int roll;

  public:
	void setdata(string name, int roll)
	{
		this->name = name;
		this->roll = roll;
	}
	void display()
	{
		cout << "name : " << name << " roll " << roll << endl;
	}
};
class exam : public student
{
  protected:
	int marks[6];

  public:
	void setmarks(int m1, int m2, int m3, int m4, int m5, int m6)
	{
		marks[0] = m1;
		marks[1] = m2;
		marks[2] = m3;
		marks[3] = m4;
		marks[4] = m5;
		marks[5] = m6;
	}
	void displaym()
	{
		display ();
		for (int i = 0; i < 6; i++)

			cout << "Sub" << i << "_"
				 << "marks  " << marks[i] << endl;
	}
};
class result : public exam
{
  protected:
	int total_marks = 0;

  public:
	void displayr()
	{
		displaym();
		for (int i = 0; i < 6; i++)

			total_marks += marks[i];
		cout << "Total marks is : " << total_marks << endl;
	}
};
int main()
{
	result obj;
	obj.setdata("Sonali Rajput", 53);
	obj.setmarks(100, 100, 100, 100, 99, 99);
	obj.displayr();
	return 0;
}
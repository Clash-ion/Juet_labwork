#include <iostream>
using std::cout;
using std::endl;
using std::string;
class student
{
  protected:
	string name;
	int branch_number;
	student() {}
	student(int b, string name) : name(name), branch_number(b) {}
};
class CSE : private student
{
	int CSE_sub1_marks, CSE_sub2_marks, CSE_sub3_marks;

  public:
	CSE() {}
	CSE(string name, int m1, int m2, int m3) : student(1, name), CSE_sub1_marks(m1), CSE_sub2_marks(m2), CSE_sub3_marks(m3) {}
	void display()
	{
		cout << "Branch_Number " << branch_number << " name - " << name << " CSE_sub1_marks " << CSE_sub1_marks << " CSE_sub2_marks " << CSE_sub2_marks << " CSE_sub3_marks " << CSE_sub3_marks << endl;
	}
};
class ECE : private student
{
	int ECE_sub1_marks, ECE_sub2_marks, ECE_sub3_marks;

  public:
	ECE() {}
	ECE(string name, int m1, int m2, int m3) : student(2, name), ECE_sub1_marks(m1), ECE_sub2_marks(m2), ECE_sub3_marks(m3) {}
	void display()
	{
		cout << "Branch_Number " << branch_number << " name - " << name << " ECE_sub1_marks " << ECE_sub1_marks << " ECE_sub2_marks " << ECE_sub2_marks << " ECE_sub3_marks " << ECE_sub3_marks << endl;
	}
};
int main()
{
	CSE a("hello", 10, 20, 30), b("world", 11, 21, 31), c("test", 12, 22, 32);
	ECE d("1stobject", 13, 14, 15), e("2ndobject", 14, 24, 34);
	a.display();
	b.display();
	c.display();
	d.display();
	e.display();
	return 0;
}
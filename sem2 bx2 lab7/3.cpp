#include <iostream>
using std::cout;
using std::endl;
using std::string;
class student
{

  protected:
	string school_name;
	string name_highest_degree;

  public:
	void getdata(string school_name, string name_highest_degree)
	{
		this->school_name = school_name;
		this->name_highest_degree = name_highest_degree;
	}
	void display()
	{
		cout << "school name   " << school_name << endl;
		cout << "highest degree   " << name_highest_degree << endl;
	}
};
class Employee
{
  protected:
	string name;
	int employee_number;

  public:
	void getdata(string name, int employee_number)
	{
		this->name = name;
		this->employee_number = employee_number;
	}
	void display()
	{
		cout << name << "\t" << employee_number << endl;
	}
};
class Manager : public Employee, public student
{
  protected:
	string title;
	float dues;

  public:
	void getdata(string title, float dues)
	{
		this->title = title;
		this->dues = dues;
	}
	void display()
	{
		cout << title << "\t" << dues << endl;
	}
};
class Scientist : public Employee, public student
{
  protected:
	int no_of_publication;

  public:
	void getdata(int nop)
	{
		this->no_of_publication = nop;
	}
	void display()
	{
		cout << "no_of_publication  " << no_of_publication << endl;
	}
};
class Labour : public Employee
{
};
int main()
{
	Manager m;
	Scientist s;
	Labour l;
	m.student::getdata("JUET", "Mtech");
	m.Employee::getdata("Mukul", 3824);
	m.getdata("idk", 74.21);
	m.student::display();
	m.Employee::display();
	m.display();

	s.student::getdata("JUET", "Phd");
	s.Employee::getdata("Mukul1", 382);
	s.getdata(23);
	s.student::display();
	s.Employee::display();
	s.display();
	l.Employee::getdata("labourer", 27828);
	l.display();
	return 0;
} 
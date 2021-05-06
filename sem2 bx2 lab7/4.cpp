#include <iostream>
using std::cout;
using std::endl;
using std::string;
class staff
{
  protected:
	string name;
	int code;

  public:
	void get(string name, int code)
	{
		this->name = name;
		this->code = code;
	}
	void show()
	{
		cout << "name - " << name << "\t"
			 << " code - " << code << endl;
	}
};
class teacher : public staff
{
  private:
	string subject;
	int publication;

  public:
	void get(string subject, int publication)
	{
		this->subject = subject;
		this->publication = publication;
	}
	void show()
	{
		cout << "subject - " << subject << "\t"
			 << " publication - " << publication << endl;
	}
	void showall()
	{
		staff::show();
		show();
	}
};
class typist : public staff
{
  protected:
	int speed;

  public:
	void get(int speed)
	{
		this->speed = speed;
	}
	void show()
	{
		cout << "speed - " << speed << endl;
	}
};
class regular : public typist
{
  public:
	void showall()
	{
		staff::show();
		show();
	}
};
class casual : public typist
{
  private:
	int daily_wages;

  public:
	void get(int daily_wages)
	{
		this->daily_wages = daily_wages;
	}
	void show()
	{
		cout << "daily wage - " << daily_wages << endl;
	}
	void showall()
	{
		staff::show();
		typist::show();
		show();
	}
};
class officer : public staff
{
  private:
	string grade;

  public:
	void get(string grade)
	{
		this->grade = grade;
	}
	void show()
	{
		cout << "grade - " << grade << endl;
	}
	void showall()
	{
		staff::show();
		show();
	}
};
int main()
{
	teacher t;
	regular r;
	casual c;
	officer o;
	t.staff::get("djeh", 3747);
	t.get("maths", 8);
	r.staff::get("hejejebej", 119);
	r.typist::get(150);
	c.staff::get("bebdsjj", 19);
	c.typist::get(160);
	c.casual::get(900);
	o.staff::get("bshsejejj", 273);
	o.get("A");
	t.showall();
	r.showall();
	c.showall();
	o.showall();
	return 0;
}
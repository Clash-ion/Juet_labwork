#include <iostream>
using std::cout;
using std::endl;
using std::string;
class str
{
	string st;

  public:
	str()
	{
	}
	str(string st)
	{
		this->st = st;
	}
	void display()
	{
		cout << st << endl;
	}
	friend str strct(str obj1, str obj2)
	{
		str temp;
		temp.st = obj1.st + obj2.st;
		return temp;
	}
};
int main()
{
	str a("hello"), b(" world"), c;
	c = strct(a, b);
	c.display();
	return 0;
}
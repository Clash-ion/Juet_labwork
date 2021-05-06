#include <iostream>
using std::cout;
using std::endl;
class ABC
{
	int real, imaginary;

  public:
	ABC() {}
	ABC(int a)
	{
		real = a;
		imaginary = a;
	}
	ABC(int a, int b)
	{
		real = a;
		imaginary = b;
	}
	friend ABC sum(ABC m, ABC n)
	{
		ABC temp;
		temp.real = m.real + n.real;
		temp.imaginary = m.imaginary + n.imaginary;
		return temp;
	}
	void display()
	{
		cout << real;
		if (imaginary < 0)
		{
			cout << " - "<< -1*imaginary <<"i"<< endl;
		}
		else
		{
			cout << " + " << imaginary <<"i"<< endl;
		}
	}
};
int main()
{
	ABC a(2), b(2, 4), sum_;
	a.display();
	b.display();
	sum_=sum(a,b);
	sum_.display();
	return 0;
}
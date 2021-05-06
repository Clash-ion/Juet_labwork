#include <iostream>
using std::cout;
using std::endl;
class Mother
{
	public:
		void display ()
		{
			cout << "Mother class" << endl;
		}
};
class Derived: public Mother
{
	public:
		void display ()
		{
			cout << "Derived class" << endl;
		}
};
int main()
{
	Derived obj;
	obj.display();
	obj.Mother::display();
	return 0;
}
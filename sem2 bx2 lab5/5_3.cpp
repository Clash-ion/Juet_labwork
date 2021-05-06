#include <iostream>
using std::cout;
using std::endl;
class ABC
{
	int x;
  public:
	ABC(int x)
	{
		this->x = x;
		cout << "constructor called for object having value of x : " << x << endl;
	}
	~ABC()
	{
		cout << "destructor called for object having value of x : " << x << endl;
	}
};
ABC a(2);
int main()
{
	ABC(3);
	return 0;
}
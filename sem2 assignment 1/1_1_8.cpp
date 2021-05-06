#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class ABC
{
  public:
	int x;
	void set_data()
	{
		cin >> x;
	}
};
void display(const ABC &ab)
{
	cout << ab.x << endl;
}
int main()
{
	ABC obj1;
	obj1.set_data();
	display(obj1);
	return 0;
}
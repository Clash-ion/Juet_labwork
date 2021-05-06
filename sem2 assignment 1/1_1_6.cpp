#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class ABC
{
	int x;

  public:
	void set_data()
	{
		cin >> x;
	}
	void display()
	{
		cout << x << endl;
	}
};
int main()
{
	ABC ab[3];
	for (int i = 0; i < 3; i++)
	{
		ab[i].set_data();
		ab[i].display();
	}
	return 0;
}
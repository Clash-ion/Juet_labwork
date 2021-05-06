#include <iostream>
using std::cout;
using std::endl;
class add
{
  private:
	int num1, num2, sum;
  public:
	add(int n1){
		num1=n1;
		num2=n1;
		}
	add(int n1 , int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
		sum = num1 + num2;
		cout << "num1 + num2 =" << sum << endl;
	}
};
int main()
{
	add obj1(23, 45);
	add obj2(5);
	return 0;
}

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class ABC{
	    const int x= 10;
	public:
	    const void display(){
	    	cout<<x;
	}
};
int main()
{
	ABC ac;
	ac.display();
	return 0;
}
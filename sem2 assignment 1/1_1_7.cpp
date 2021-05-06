#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class ABC{
	    int x;
	public:
	    void get_data()
	    {
	    	cout<<x;
	    }
	    friend void set_data(ABC &ref)
	    {
	    	cin>>ref.x;
	    }
};
int main()
{
	ABC ab;
	set_data(ab);
	ab.get_data();
	return 0;
}
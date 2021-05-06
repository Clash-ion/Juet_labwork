#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class ABC{
	    
	    static int x;
	public:
	    static void static_function();
	    static void get_data(){
	    	cout<<x;
	    }
};

void ABC::static_function(){
   x=10;
}

int main()
{
	ABC ab;
	ab.static_function();
	ab.get_data();
	return 0;
}
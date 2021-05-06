#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class ABC{
	    int x,y;
	public:
	    void get_data(int x=0,int y=0){
	    	this->x=x;
	    	this->y=y;
	    }
	    void display(){
	    	cout <<x<<endl;
	    	cout <<y<<endl;
	    }
};
int main()
{
	ABC ab;
	ab.get_data(10);
	ab.display();
	return 0;
}
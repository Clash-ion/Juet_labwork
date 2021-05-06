#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class rectangle
{
		int length;
		int width;
	public:
		void get_parameters(){
			length = 1;
			 width = 1;
		}
		void get_parameters(int length,int width){
			this->length=length;
			this->width=width;
		}
		int area();
		int perimeter();
};
int rectangle::area()
{
	return length*width;
}
int rectangle::perimeter()
{
	return 2*(length+width);
}
int main(int argc, char *argv[])
{
	int x,y;
	rectangle r1;
	cout << "Input length and width of ractangle" << endl;
	cin >> x >> y;
	r1.get_parameters(x,y);
	cout << "area is : " << r1.area() <<endl; 
	cout << "perimeter is : " << r1.perimeter() <<endl;
	return 0; 
}
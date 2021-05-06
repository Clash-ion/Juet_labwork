#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Shirt
{
  public:
	int collarsize;
	int sleeveLength;
};

class Pants
{
  public:
	int waistSize;
	int inSeam;
};

void displayClothingFacts(Shirt);
void displayClothingFacts(Pants);

int main()
{
	Shirt s1 = {5,10};
	Pants p1 = {6,12};
	
	displayClothingFacts(s1);
	displayClothingFacts(p1);
}

void displayClothingFacts(Shirt s)
{
	cout << "collorsize : " << s.collarsize << "\nsleeveLength : " << s.sleeveLength << endl;
	
}
void displayClothingFacts(Pants p)
{
	cout << "waistSize : " << p.waistSize << "\ninSteam : " << p.inSeam << endl;
}
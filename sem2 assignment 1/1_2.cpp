#include <iostream>
#include <time.h>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;
bool headtails();
int main()
{
	int count = 0;
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		if (headtails() == 0)
		{
			cout << "H"<<endl;
			count++;
		}
		else
			cout << "T"<<endl;
	}
	cout << "No of Heads : " << count << endl;
	cout << "No of Tails : " << 100 - count << endl;
	return 0;
}
bool headtails()
{
	bool ht;
	ht = 0 + (rand() % (1 - 0 + 1));
	return ht;
}
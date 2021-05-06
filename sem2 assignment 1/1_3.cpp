#include <iostream>
#include <math.h>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

void question(int, int &, int &);
int answer(int, int);
void correct();
void incorrect();
int main()
{
	int count_true = 0, count_false = 0, level = 1, total_count = 0,total=0;
	srand(time(0));
	while (1)
	{
		int a, b, userinp;
		int &refa = a;
		int &refb = b;
		question(level, refa, refb);
	label1:
		cout << "What is " << a << " times " << b << "?" << endl;
		cin >> userinp;
		++total_count;
		++total;
		if(userinp == -1){
		return 0; 
		}
		if ((userinp == answer(a, b)) && total_count <= 11)
		{
			correct();
			count_true++;
		}
		else
		{
			incorrect();
			count_false++;
			if (total_count < 10)
			{
				goto label1;
			}
		}

		if (total_count > 10 && count_true >= 8)
		{
			cout << "Congratulations, you are ready to go to the next level!\n" << endl;
			level++;
			total_count = 0;
			count_true = 0;
		}

		else if (total_count > 10 && count_true < 8)
		{
			cout << "Please ask your teacher for extra help." << endl;
			count_true = 0, count_false = 0, total_count = 0, level = 1;
		}
	}
	return 0;
}
void question(int level, int &a, int &b)
{
	a = pow(10, level - 1) + (rand() % ((int)pow(10, level) - (int)pow(10, (level - 1)) + 1));
	b = pow(10, level - 1) + (rand() % ((int)pow(10, level) - (int)pow(10, (level - 1)) + 1));

}
int answer(int a, int b)
{
	return a * b;
}
void correct()
{
	int a;
	a = (1 + (rand() % (4 - 1 + 1)));
	switch (a)
	{
	case 1:
		cout << "Very good!" << endl;
		break;
	case 2:
		cout << "Excellent!" << endl;
		break;
	case 3:
		cout << "Nice work!" << endl;
		break;
	case 4:
		cout << "Keep up the good work!" << endl;
		break;
	}
}
void incorrect()
{
	int a;
	a = (1 + (rand() % (4 - 1 + 1)));
	switch (a)
	{
	case 1:
		cout << "No. Please try again." << endl;
		break;
	case 2:
		cout << "Wrong. Try once more." << endl;
		break;
	case 3:
		cout << "Don't give up!" << endl;
		break;
	case 4:
		cout << "No. Keep trying." << endl;
		break;
	}
}
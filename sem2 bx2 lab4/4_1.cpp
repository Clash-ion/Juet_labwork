#include <iostream>
#include <time.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class examination
{
	int marks[3];

  public:
	string roll_no;
	void setmarks(int *marks);
	int total_marks();
	friend void highest_marks(examination *);
	void print_all()
	{
		cout << roll_no << "   " << marks[0] + marks[1] + marks[2] << endl;
	}
};
int main()
{
	srand(time(0));
	examination st[100];
	for (int i = 0; i < 100; i++)
	{
		st[i].roll_no = "201B" + std::to_string(i + 1);
		int temp[3];
		for (int j = 0; j < 3; j++)
		{
			temp[j] = 7 + rand() % (15 - 7 + 1);
		}
		st[i].setmarks(temp);
	}
	for (int i = 0; i < 100; i++)
	{
		st[i].print_all();
	}
	highest_marks(st);
	return 0;
}
void examination::setmarks(int *marks)
{
	this->marks[0] = marks[0];
	this->marks[1] = marks[1];
	this->marks[2] = marks[2];
}
int examination::total_marks()
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += marks[i];
	}
	return sum;
}
void highest_marks(examination *st)
{
	int high_s1 = (st + 0)->marks[0],
high_s1_index = 0, high_s2 = (st + 0)->marks[1], high_s2_index = 0, high_s3 = (st + 0)->marks[2], high_s3_index = 0, total_mark = (st + 0)->total_marks(), high_total_index = 0;
	for (int i = 0; i < 99; i++)
	{
		if ((st + i + 1)->marks[0] > high_s1)
		{
			high_s1 = (st + i + 1)->marks[0];
			high_s1_index = i + 1;
		}
		if ((st + i + 1)->marks[1] > high_s2)
		{
			high_s2 = (st + i + 1)->marks[1];
			high_s2_index = i + 1;
		}
		if ((st + i + 1)->marks[2] > high_s3)
		{
			high_s3 = (st + i + 1)->marks[2];
			high_s3_index = i + 1;
		}
		if ((st + i + 1)->total_marks() > total_mark)
		{
			total_mark = (st + i + 1)->total_marks();
			high_total_index = i + 1;
		}
	}
	cout << "highes in subject 1 is :" << high_s1 << " and scored by " << st[high_s1_index].roll_no << endl;
	cout << "highes in subject 2 is :" << high_s2 << " and scored by " << st[high_s2_index].roll_no << endl;
	cout << "highes in subject 3 is :" << high_s3 << " and scored by " << st[high_s3_index].roll_no << endl;
	cout << "highest total is :" << total_mark << " and scored by " << st[high_total_index].roll_no << endl;
}
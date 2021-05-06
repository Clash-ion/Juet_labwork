#include <iostream>
using std::cout;
using std::endl;
using std::string;

class student
{
  protected:
	string name;
	int roll_no;

  public:
	void display()
	{
		cout << "Name : " << this->name << " Roll no : " << roll_no << endl;
	}
};
class T1 : virtual public student
{
  protected:
	int sub_marks[4];

  public:
	void display_marks()
	{
		cout << " sub1 " << sub_marks[0] << " sub2 " << sub_marks[1] << " sub3 " << sub_marks[2] << " sub4 " << sub_marks[3] << endl;
	}
};
class T2 : virtual public student
{
  protected:
	int sub_marks[4];

  public:
	void display_marks()
	{
		cout << " sub1 " << sub_marks[0] << " sub2 " << sub_marks[1] << " sub3 " << sub_marks[2] << " sub4 " << sub_marks[3] << endl;
	}
};
class T3 : virtual public student
{
  protected:
	int sub_marks[4];

  public:
	void display_marks()
	{
		cout << " sub1 " << sub_marks[0] << " sub2 " << sub_marks[1] << " sub3 " << sub_marks[2] << " sub4 " << sub_marks[3] << endl;
	}
};
class P1 : virtual public student
{
  protected:
	int sub_marks[4];

  public:
	void display_marks()
	{
		cout << " sub1 " << sub_marks[0] << " sub2 " << sub_marks[1] << " sub3 " << sub_marks[2] << " sub4 " << sub_marks[3] << endl;
	}
};
class P2 : virtual public student
{
  protected:
	int sub_marks[4];

  public:
	void display_marks()
	{
		cout << " sub1 " << sub_marks[0] << " sub2 " << sub_marks[1] << " sub3 " << sub_marks[2] << " sub4 " << sub_marks[3] << endl;
	}
};
class Attendance : virtual public student
{
  protected:
	int attendance_percent;

  public:
	void display()
	{
		cout << "Attendance pecentage is " << attendance_percent << endl;
	}
};
class Total : public T1, public T2, public T3, public P1, public P2, public Attendance
{
	int total_marks[4] = {0};
	int total_percent;

  public:
	void total_mark()
	{
		int Attendance_mark;
		if (attendance_percent >= 90)
		{
			Attendance_mark = 5;
		}
		else if (attendance_percent >= 88)
		{
			Attendance_mark = 4;
		}
		else if (attendance_percent >= 86)
		{
			Attendance_mark = 3;
		}
		else if (attendance_percent >= 83)
		{
			Attendance_mark = 2;
		}
		else if (attendance_percent >= 80)
		{
			Attendance_mark = 1;
		}
		else
		{
			Attendance_mark = 0;
		}
		for (int k = 0; k < 4; k++)
		{
			total_marks[k] = T1::sub_marks[k] + T2::sub_marks[k] + T3::sub_marks[k] + P1::sub_marks[k] + P2::sub_marks[k] + Attendance_mark;
		}
		total_percent = (total_marks[0] + total_marks[1] + total_marks[2] + total_marks[3]) / 4;
	}
	friend void studgrade(Total *, int);
	friend void studgrade_lex(Total *, int);
	friend void search(Total *, string, int);
	friend class Faculty;
	friend class Administration;
};

void studgrade(Total *ptr, int size)
{
	cout << endl
		 << "------------" << endl;
	string gradetemp[size][2];
	for (int i = 0; i < size; ++i)
	{
		ptr[i].total_mark();
		if (ptr[i].total_percent > 80)
		{
			gradetemp[i][0] = "A";
		}
		else if (ptr[i].total_percent > 70)
		{
			gradetemp[i][0] = "B";
		}
		else if (ptr[i].total_percent > 60)
		{
			gradetemp[i][0] = "C";
		}
		else if (ptr[i].total_percent > 50)
		{
			gradetemp[i][0] = "D";
		}
		else if (ptr[i].total_percent <= 50)
		{
			gradetemp[i][0] = "F";
		}
		gradetemp[i][1] = ptr[i].name;
		//cout << gradetemp[i][0] << "\t" << gradetemp[i][1] << endl;
	}
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i; ++j)
		{
			if (gradetemp[j][0] < gradetemp[j + 1][0])
			{
				string temp1, temp2;
				temp1 = gradetemp[j][0];
				temp2 = gradetemp[j][1];
				gradetemp[j][0] = gradetemp[j + 1][0];
				gradetemp[j][1] = gradetemp[j + 1][1];
				gradetemp[j + 1][0] = temp1;
				gradetemp[j + 1][1] = temp2;
			}
		}
		//cout << gradetemp[i][0] << "\t" << gradetemp[i][1] << endl;
	}
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (gradetemp[j][0] == gradetemp[j + 1][0] && gradetemp[j][1] < gradetemp[j + 1][1])
			{
				string temp1, temp2;
				temp1 = gradetemp[j][0];
				temp2 = gradetemp[j][1];
				gradetemp[j][0] = gradetemp[j + 1][0];
				gradetemp[j][1] = gradetemp[j + 1][1];
				gradetemp[j + 1][0] = temp1;
				gradetemp[j + 1][1] = temp2;
			}
		}
	}
	for (int i = size-1; i >= 0; i--)
	{
		//cout << "a" <<endl;
		cout << gradetemp[i][0] << "\t" << gradetemp[i][1] << endl;
	}
	cout << endl
		 << "------------" << endl;
}
void studgrade_lex(Total *ptr, int size)
{
	string gradetemp[size][2];
	for (int i = 0; i < size; ++i)
	{
		if (ptr[i].total_percent > 80)
		{
			gradetemp[i][0] = "A";
		}
		else if (ptr[i].total_percent > 70)
		{
			gradetemp[i][0] = "B";
		}
		else if (ptr[i].total_percent > 60)
		{
			gradetemp[i][0] = "C";
		}
		else if (ptr[i].total_percent > 50)
		{
			gradetemp[i][0] = "D";
		}
		else if (ptr[i].total_percent <= 50)
		{
			gradetemp[i][0] = "F";
		}
		gradetemp[i][1] = ptr[i].name;
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (gradetemp[j][1] > gradetemp[j + 1][1])
			{
				string temp1, temp2;
				temp1 = gradetemp[j][0];
				temp2 = gradetemp[j][1];
				gradetemp[j][0] = gradetemp[j + 1][0];
				gradetemp[j][1] = gradetemp[j + 1][1];
				gradetemp[j + 1][0] = temp1;
				gradetemp[j + 1][1] = temp2;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << gradetemp[i][0] << "\t" << gradetemp[i][1] << endl;
	}
	cout << endl
		 << "------------" << endl;
}
void search(Total *ptr, string temp, int size)
{
	int space_index_temp, space_index;
	for (int i = 0; i < temp.length(); i++)
	{
		if (temp.at(i) == ' ')
		{
			//cout << i <<endl;
			space_index_temp = i;
			break;
		}
	}
	for (int k = 0; k < size; k++)
	{
		string temproary = ptr[k].name;
		for (int i = 0; i < temproary.length(); i++)
		{
			if (temproary.at(i) == ' ')
			{
				//cout << i <<endl;
				space_index = i;
				break;
			}
		}
		if (!(temproary.compare(0, space_index, temp, 0, space_index_temp)))
		{
			if (ptr[k].total_percent > 80)
			{
				cout << "A\t";
			}
			else if (ptr[k].total_percent > 70)
			{
				cout << "B\t";
			}
			else if (ptr[k].total_percent > 60)
			{
				cout << "C\t";
			}
			else if (ptr[k].total_percent > 50)
			{
				cout << "D\t";
			}
			else if (ptr[k].total_percent <= 50)
			{
				cout << "F\t";
			}
			ptr[k].student::display();
		}
	}
	cout << endl
		 << "------------" << endl;
}

class Faculty
{
  public:
	void addresult(Total &obj, int T1_1, int T1_2, int T1_3, int T1_4, int T2_1, int T2_2, int T2_3, int T2_4, int T3_1, int T3_2, int T3_3, int T3_4, int P1_1, int P1_2, int P1_3, int P1_4, int P2_1, int P2_2, int P2_3, int P2_4, int Attend)
	{
		obj.T1::sub_marks[0] = T1_1;
		obj.T1::sub_marks[1] = T1_2;
		obj.T1::sub_marks[2] = T1_3;
		obj.T1::sub_marks[3] = T1_4;
		obj.T2::sub_marks[0] = T2_1;
		obj.T2::sub_marks[1] = T2_2;
		obj.T2::sub_marks[2] = T2_3;
		obj.T2::sub_marks[3] = T2_4;
		obj.T3::sub_marks[0] = T3_1;
		obj.T3::sub_marks[1] = T3_2;
		obj.T3::sub_marks[2] = T3_3;
		obj.T3::sub_marks[3] = T3_4;
		obj.P1::sub_marks[0] = P1_1;
		obj.P1::sub_marks[1] = P1_2;
		obj.P1::sub_marks[2] = P1_3;
		obj.P1::sub_marks[3] = P1_4;
		obj.P2::sub_marks[0] = P2_1;
		obj.P2::sub_marks[1] = P2_2;
		obj.P2::sub_marks[2] = P2_3;
		obj.P2::sub_marks[3] = P2_4;
		obj.attendance_percent = Attend;
	}
};
class Administration
{
  public:
	void addstudentdetail(Total &obj, int roll, string name)
	{
		obj.name = name;
		obj.roll_no = roll;
	}
};
int main()
{
	Total t[5];
	Faculty teacher1;
	Administration admin1;
	admin1.addstudentdetail(t[0], 28, "Sonali Rajput");
	teacher1.addresult(t[0], 10, 11, 12, 13, 19, 20, 21, 22, 28, 29, 30, 31, 7, 8, 7, 8, 12, 13, 12, 13, 91);
	admin1.addstudentdetail(t[1], 26, "Mukul Kumar");
	teacher1.addresult(t[1], 10, 11, 12, 13, 19, 20, 21, 22, 28, 29, 30, 31, 7, 8, 7, 8, 12, 13, 12, 13, 91);
	admin1.addstudentdetail(t[2], 27, "Swapnil Pant");
	teacher1.addresult(t[2], 10, 11, 12, 13, 19, 20, 21, 22, 8, 9, 10, 11, 7, 8, 7, 8, 12, 13, 12, 13, 91);
	admin1.addstudentdetail(t[3], 25, "Sonali Singh");
	teacher1.addresult(t[3], 10, 11, 12, 13, 19, 20, 21, 22, 8, 9, 10, 11, 7, 8, 7, 8, 12, 13, 12, 13, 91);
	admin1.addstudentdetail(t[4], 29, "Naman Khattar");
	teacher1.addresult(t[4], 10, 11, 12, 1, 1, 0, 21, 22, 28, 29, 30, 31, 7, 8, 7, 8, 12, 13, 12, 13, 91);
	for (int i = 0; i < 5; i++)
	{
		t[i].student::display();
	}

	studgrade(t, 5);
	studgrade_lex(t, 5);
	search(t, "Sonali", 5);
	return 0;
}
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Student{
		string name;
		int roll;
	public:
		void set_data()
		{
			cout << "Input student name : ";
			cin >> name;
			cout << "Input student roll number : ";
			cin >> roll;
		}
		void get_data()
		{
			cout << name << endl;
			cout << roll << endl;
		}
		friend void friend_function(Student&);
};
void friend_function(Student &st){
	st.roll = 10;
}
int main()
{
	Student st1;
	st1.set_data();
	friend_function(st1);
	st1.get_data();
	return 0;
}
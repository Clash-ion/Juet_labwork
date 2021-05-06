#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Student{
		string name;
		int roll;
	public:
	    void set_data(){
	    	cout<<"Input your name : ";
	    	cin>>name;
	    	cout<<"Input your roll : ";
	    	cin>>roll;
	    }
		friend class friend_class;
};
class friend_class{
	public:
		void display(Student st)
		{
			cout<<"name : "<<st.name<<endl;
			cout<<"roll : "<<st.roll<<endl;
		}			
};
int main()
{
	Student s1;
	friend_class fc;
	s1.set_data();
	fc.display(s1);
	return 0;
}
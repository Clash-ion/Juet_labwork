#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Movie
{
	
		string title;
		string name_of_director;
		int year;
	public:
		void setTitle(string);
		void setYear(int);
		void setDirector(string);
		void displayInformation();
};
void Movie::setTitle(string title)
{
	this->title = title;
}
void Movie::setYear(int year)
{
	this->year = year;
}
void Movie::setDirector(string Director)
{
	name_of_director = Director;
}
void Movie::displayInformation()
{
	cout << "Movie title : " << title << endl;
	cout << "Movie release year : " << year << endl;
	cout << "Movie Director name : " << name_of_director << endl;
}
int main()
{
	Movie m1;
	string title, director;
	int year;
	cout << "Input movie title" << endl;
	cin >> title;
	cout << "Input movie year" << endl;
	cin >> year;
	cout << "Input movie director" << endl;
	cin >> director;
	m1.setYear(year);
	m1.setTitle(title);
	m1.setDirector(director);
	m1.displayInformation();
	return 0;
}
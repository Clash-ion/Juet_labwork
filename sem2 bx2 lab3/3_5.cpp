#include <iostream>
#include <stdlib.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void movie(string name, int time = 90)
{
	cout << "Name of movie is " << name << " with running time of " << time << endl;
}

int main()
{
	string moviename;
	int time;
	cout << "Enter name of movie" << endl;
	getline(cin,moviename);
	cout << "Enter movie running time" << endl;
	cin >> time;
	cout << "All arguments are given to function" << endl;
	movie(moviename,time);
	cout << "Only single argumrnt -- moviename is given to function" << endl;
	movie(moviename);
	return 0 ;
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class order
{
	static float minimum_charge;
	int table_number;
	string server_name;
	int number_of_patrons;
  public:
	void getdata(){
		cin >> table_number;
		getline(cin, server_name);
		cin >> number_of_patrons;
	}
	static void display_minimum_charge()
	{
		cout << minimum_charge << endl;
	}
};
float order::minimum_charge = 4.75;
int main()
{
	order::display_minimum_charge();
	return 0;
}
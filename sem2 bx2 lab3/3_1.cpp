#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
void swap(string &, string &);
int main()
{
	string a, b;
	string &ref_a = a;
	string &ref_b = b;
	cout << "Input variable a" << endl;
	cin >> a;
	cout << "Input variable b" << endl;
	cin >> b;
	swap(ref_a, ref_b);
	cout << "Now a variable is " << a << "\n"
		 << "And b variable is " << b << endl;
	return 0;
}
void swap(string &ref_a, string &ref_b)
{
	string c = ref_a;
	ref_a = ref_b;
	ref_b = c;
}
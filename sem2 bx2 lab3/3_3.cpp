#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd(int, int);
void simplify(int &, int &);
void add(int, int, int, int, int &, int &);
void sub(int, int, int, int, int &, int &);
void mul(int, int, int, int, int &, int &);
void div(int, int, int, int, int &, int &);

int main()
{
	int a, b, c, d, numer, denom;
	int &ref_numer = numer;
	int &ref_denom = denom;
	char op;
	cout << "input (a/b) as a and b : ";
	cin >> a >> b;
	cout << "input operator : ";
	cin >> op;
	cout << "input (c/d) as c and d : ";
	cin >> c >> d;
	switch (op)
	{
	case '+':
	if (b == 0 || d==0){
	cout<<"division by 0 not possible"<<endl;
	break;
	}
		add(a, b, c, d, ref_numer, ref_denom);
		cout << "sum is\n"
			 << numer << "\n----\n" << denom << endl;
			 break;
	case '-':
	if (b == 0 || d==0){
	cout<<"division by 0 not possible"<<endl;
	break;
	}
		sub(a, b, c, d, ref_numer, ref_denom);
		cout << "sub is\n"
			 << numer << "\n----\n" << denom << endl;
			 break;
	case '*':
	if (b == 0 || d==0){
	cout<<"division by 0 not possible"<<endl;
	break;
	}
		mul(a, b, c, d, ref_numer, ref_denom);
		cout << "mul is\n"
			 << numer << "\n----\n" << denom << endl;
			 break;
	case '/':
	if (b == 0 || d==0){
	cout<<"division by 0 not possible"<<endl;
	break;
	}
		div(a, b, c, d, ref_numer, ref_denom);
		cout << "div is\n"
			 << numer << "\n----\n" << denom << endl;
			 break;
	}
}

void add(int a, int b, int c, int d, int &numer, int &denom)
{
	numer = (a * d) + (b * c);
	denom = (b * d);
	simplify(numer, denom);
}

void sub(int a, int b, int c, int d, int &numer, int &denom)
{
	numer = (a * d) - (b * c);
	denom = (b * d);
	simplify(numer, denom);
}

void mul(int a, int b, int c, int d, int &numer, int &denom)
{
	numer = (a * d) * (b * c);
	denom = (b * d);
	simplify(numer, denom);
}

void div(int a, int b, int c, int d, int &numer, int &denom)
{
	numer = (a * d) / (b * c);
	denom = (b * d);
	simplify(numer, denom);
}

void simplify(int &numer, int &denom)
{
	int hcf = gcd(numer,denom);
	numer = numer/hcf;
	denom = denom/hcf;
}
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if (a == b)
		return a;
	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}
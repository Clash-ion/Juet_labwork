#include <iostream>
#include <stdlib.h>
#include <time.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class Account
{
	string name;
	long long int account_number;
	string account_type;
	int Balance;
	string pin = "0000";
  public:
	void initial_account();
	void dep_amount(int);
	void withdraw(int);
	void bal_name();
	bool pin_checker(string);
};
int main()
{
	srand(time(0));
	Account a1;
	int n;
	a1.initial_account();
	while (1)
	{
		cout << "Enter your choice :- " << endl
			 << "1. Deposit Amount" << endl
			 << "2. Withdraw Amount" << endl
			 << "3. Check Balance" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "Deposit the amount you want to enter" << endl;
			int bal;
			cin >> bal;
			a1.dep_amount(bal);
			break;
		case 2:
		{
			string pin_code;
			cout << "Enter pin" << endl;
			cin >> pin_code;
			if (a1.pin_checker(pin_code))
			{
				a1.bal_name();
				cout << "Enter amount to withdraw" << endl;
				int amount_withdraw;
				cin >> amount_withdraw;
				a1.withdraw(amount_withdraw);
			}
			break;
		}
		case 3:
		{
			string pin_code;
			cout << "Enter pin" << endl;
			cin >> pin_code;
			if (a1.pin_checker(pin_code))
			{
				a1.bal_name();
			}
			break;
		}
		case -1:
			return 0;
		default:
		{
			cout << "wrong input" << endl;
			break;
		}
		}
	}
	return 0;
}
void Account::initial_account()
{
	string first[10]= {"Mukul","Sonali","Swapnil","Naman","Golden","Anupam","Princy","Anuj","Hello","World"};
	string last[5] = {"Rajput","Sinha","Kushwaha","Singh","Yadav"};
	name = first[0+(rand()%(10-0+1))]+" "+last[0+(rand()%(5-0+1))];
	account_number = rand();
	string ac_ty[4] = {"Saving","Student","Platinum","Gold"};
	account_type = ac_ty[0+(rand()%(3-0+1))];
	Balance = 1000;
}
void Account::dep_amount(int bal)
{
	Balance += bal;
}
void Account::withdraw(int withdrw)
{
	bal_name();
	if (Balance - 1000 >= withdrw)
	{
		cout << "You have withdrawn " << withdrw << endl;
		Balance -= withdrw;
		cout << "Your new balance is : " << Balance << endl;
	}
	else
	{
		cout << "Insufficient Balance" << endl;
	}
}
void Account::bal_name()
{
	cout << "Account holder name is : " << name << endl
		 << "Current balance : " << Balance << endl;
}
bool Account::pin_checker(string pin)
{
	if (this->pin == pin)
	{
		return true;
	}
	else
	{
		return false;
	}
}
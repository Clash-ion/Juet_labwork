#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
typedef struct phonebook
{
	string name;
	long long int number;
} phonebook;
typedef struct record
{
	string type;
	long long int number;
} record;

class landline
{
  private:
	record *records_ptr;
	int record_size = 0;
	int flag = 0;

  protected:
	string name;
	long long int number;

  public:
	void sub_data(string name, long long int number)
	{
		this->name = name;
		this->number = number;
	}
	void call(long long int sub_number)
	{
		cout << "Dailing...." << endl;
		if (record_size == 0)
		{
			record_size++;
			records_ptr = (record *)malloc(record_size * sizeof(record));
			records_ptr[record_size - 1].number = sub_number;
			records_ptr[record_size - 1].type = "incoming";
		}
		else if (record_size <= 20 && flag == 0)
		{
			record_size++;
			records_ptr = (record *)realloc(records_ptr, record_size * sizeof(record));
			records_ptr[record_size - 1].number = sub_number;
			records_ptr[record_size - 1].type = "incoming";
			if (record_size == 20)
			{
				flag = 1;
			}
		}
		else
		{
			record *temp_records_ptr;
			temp_records_ptr = (record *)malloc(record_size * sizeof(record));
			for (int i = 0; i < record_size - 1; i++)
			{
				temp_records_ptr[i].number = records_ptr[i + 1].number;
				temp_records_ptr[i].type = records_ptr[i + 1].type;
			}
			temp_records_ptr[record_size - 1].number = sub_number;
			temp_records_ptr[record_size - 1].type = "incoming";
			records_ptr = temp_records_ptr;
		}
	}
	void recieve(long long int sub_number)
	{
		if (record_size == 0)
		{
			record_size++;
			records_ptr = (record *)malloc(record_size * sizeof(record));
			records_ptr[record_size - 1].number = sub_number;
			records_ptr[record_size - 1].type = "recieving";
		}
		else if (record_size <= 20 && flag == 0)
		{
			record_size++;
			records_ptr = (record *)realloc(records_ptr, record_size * sizeof(record));
			records_ptr[record_size - 1].number = sub_number;
			records_ptr[record_size - 1].type = "recieving";
			if (record_size == 20)
			{
				flag = 1;
			}
		}
		else
		{
			record *temp_records_ptr;
			temp_records_ptr = (record *)malloc(record_size * sizeof(record));
			for (int i = 0; i < record_size - 1; i++)
			{
				temp_records_ptr[i].number = records_ptr[i + 1].number;
				temp_records_ptr[i].type = records_ptr[i + 1].type;
			}
			temp_records_ptr[record_size - 1].number = sub_number;
			temp_records_ptr[record_size - 1].type = "recieving";
			records_ptr = temp_records_ptr;
		}
	}
	void callbyhistory()
	{
		int index;
		for (int i = 0; i < record_size; i++)
		{
			cout << i << "\t" << records_ptr[i].number << endl;
		}
		cin >> index;
		call(records_ptr[index].number);
	}
};
class mobile : public landline
{
  private:
	int phone_book_size = 0;

  protected:
	phonebook *ptr = NULL;

  public:
  void contact ()
  {
  	
  	for (int i = 0;i<phone_book_size;i++)
  	{
  		cout<<ptr[i].name<<"\t"<<ptr[i].number <<endl;
  	}
  }
	void addcontact(string pname, long long int pno)
	{
		if (phone_book_size == 0)
		{
			++phone_book_size;
			ptr = (phonebook *)malloc(phone_book_size * sizeof(phonebook));
		}
		else
		{
			++phone_book_size;
			ptr = (phonebook *)realloc(ptr, phone_book_size * sizeof(phonebook));
		}
		if (ptr != NULL)
		{
			ptr[phone_book_size - 1].name = pname;
			ptr[phone_book_size - 1].number = pno;
		}
		else
		{
			addcontact(pname, pno);
		}
	}
	void call(string sub_name)
	{
		for (int i = 0; i < phone_book_size; i++)
		{
			if (ptr[i].name == sub_name)
			{
				landline::call(ptr[i].number);
				return;
			}
		}
		cout << "No Contact named " << sub_name << endl;
		return;
	}
};
int main()
{
	mobile m;
	m.sub_data("mukul",7493895160) ;
	m.addcontact("mukul",7493895160) ;
	m.addcontact("mukul kumar",7493895161) ;
	m.addcontact("mukul roy",7493895162) ;
	m.addcontact("mukul rajput",7493895163) ;
	m.contact();
	m.call("mukul");
	m.call("mukul roy");
	m.landline::call(8743287423);
	m.recieve(2938420344);
	m.landline::call(8756840345);
	m.landline::call(8743287423);
	m.landline::call(9696966953);
	m.landline::call(8765770307);
	m.landline::call(9313128701);
	m.landline::call(8743287423);
	m.landline::call(8743287423);
	m.landline::call(8743287423);
	m.landline::call(8743287423);
	m.call("mukul rajput");
	m.landline::call(8743287423);
	m.call("mukul");
	m.call("mukul roy");
	m.landline::call(8743287423);
	m.recieve(2938420344);
	m.landline::call(8765770307);
	m.call("mukul");
	m.landline::call(8743287424);
	m.callbyhistory();
	m.callbyhistory();
	return 0;
}
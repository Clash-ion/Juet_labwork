#include <iostream>

using std::cout;
using std::endl;

class vector
{
	float *ptr;
	static int size;

  public:
	vector() {}
	vector(const vector &ref)
	{
		//this->ptr  = ref.ptr;
		this->size = ref.size;
		ptr = (float *)malloc(size * sizeof(float));
		for (int i = 0; i < size; i++)
		{
			*(this->ptr + i) = *(ref.ptr + i);
		}
	}
	void pushback(float x)
	{
		size++;
		if (size == 1)
			ptr = (float *)malloc(size * sizeof(float));
		else
			ptr = (float *)realloc(ptr, size * sizeof(float));
		*(ptr + size - 1) = x;
	}
	void modifybyindex(int i, float x)
	{
		*(ptr + i) = x;
	}
	void modifybyvalue(float i, float x)
	{
		int index;
		for (int j = 0; j < size; j++)
		{
			if (i == *(ptr + j))
			{
				index = j;
			}
		}
		modifybyindex(index, x);
	}
	vector operator*(float a)
	{
		vector temp(*this);
		for (int i = 0; i < size; i++)
		{
			*(temp.ptr + i) = *(temp.ptr + i) * a;
		}
		return temp;
	}
	void display()
	{
		cout << "{ ";
		for (int i = 0; i < size; i++)
		{
			cout << *(ptr + i) ;
			if(i!=size-1)
			{
				cout << " ,";
			}
		}
		cout << " }" << endl;
	}
};
int vector::size = 0;
int main()
{
	vector a, b;
	a.pushback(1.4);
	a.pushback(2.6);
	a.pushback(3.8);
	a.pushback(4);
	a.display();

	a.modifybyindex(3, 5.4 );
	a.display();

	a.modifybyvalue(5.4, 6.6);
	a.display();

	b = a * 2.5;
	a.display();
	b.display();

	return 0;
}
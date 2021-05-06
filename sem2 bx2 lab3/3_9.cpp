#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int *primearray(int, int, int &);
int number_counter(int *, int);

int main()
{
	int start, end, length;
	int &ref_length = length;
	cin >> start >> end;
	cout << number_counter(primearray(start, end, ref_length), length) << endl;
}

int *primearray(int start, int end, int &length)
{
	int *ptr;
	length = 0;
	ptr = (int *)malloc(length * sizeof(int));
	for (int i = start; i <= end; i++)
	{
		int flag = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1 && i != 1)
		{
			length++;
			*(ptr + length - 1) = i;
			ptr = (int *)realloc(ptr, (length + 1) * sizeof(int));
		}
		if (length == 0)
			*ptr = -1;
	}

	return ptr;
}

int number_counter(int *arr, int length)
{
	int backup_array[length];
	for (int i = 0; i < length; i++)
	{
		backup_array[i] = *(arr + i);
	}

	int array[10] = {0};

	for (int i = 0; i < length; i++)
	{
		while (*(arr + i) > 0)
		{
			int rem;
			rem = *(arr + i) % 10;
			*(arr + i) = *(arr + i) / 10;
			array[rem]++;
		}
	}

	int max = arr[0], array_index = 0;

	if (*arr == -1)
		array_index = -1;

	else
	{
		for (int i = 1; i < 10; i++)
		{
			if (max <= array[i])
			{
				max = array[i];
				array_index = i;
			}
		}
	}

	return array_index;
}
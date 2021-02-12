#include <stdio.h>
int main()
{
	for (int i = 1111; i <= 9999; i++)
	{
		if ((i / 1000) % 10 == (i / 100) % 10 && (i / 10) % 10 == i % 10) // This is to check for AA BB wala condition.
		{
			for (int j = 1; j <= i; j++) // iss loop se har j ka value ke liye j*j krke check krte hai ki kya wo i ke equal hai agar hai toh loop break kro nai toh chalne do.
			{
				if (j * j == i)
				{
					printf("%d\n", j);
					break;
				}
			}
		}
	}
}
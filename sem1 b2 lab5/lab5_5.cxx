#include <stdio.h>
int main()
{
	int n = 7;
	for (int a = 0; a < n; a++)
	{
		for (int b = n; b > a; b--)
		{
			printf("*");
		}
		printf("\n");
	}
}
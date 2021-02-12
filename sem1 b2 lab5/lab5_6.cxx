#include <stdio.h>
int main()
{
	int n=7;
	for (int a=n-1,c=1;a>=0;a--,c++)
	{
		for (int b=a;b>0;b--)
	{
		printf(" ");
	}
	for (int b=1;b<=c;b++)
	{
		printf("*");
	}
	printf("\n");
	}
}
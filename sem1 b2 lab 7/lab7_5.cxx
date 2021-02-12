#include <stdio.h>
int fact(int n);

int main()
{
	int n;
	printf("Enter number for which you want to calculate Factorial ");
	scanf("%d", &n);
	printf("Factorial is %d", fact(n));

	return 0;
}

int fact(int n)
{
	int fact =1;
	for(;n>0;n--)
	fact*=n;
	return fact;
}

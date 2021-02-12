#include <stdio.h>
int div(int n1, int n2);
int main()
{
	int n1, n2;
	printf("Enter numbers you want as dividend to be divided by divisor   ");
	scanf("%d %d", &n2, &n1);
	printf("Quotient is %d", div(n1, n2));
	return 0;
}

int div(int divisor, int dividend)
{
	int remainder, quotient;
	for (quotient = 1; dividend > divisor; quotient++)
	{
		dividend -= divisor;
		remainder = dividend;
	}
	return quotient;
}

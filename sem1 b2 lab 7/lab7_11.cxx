#include <stdio.h>
void fabonici(int n);

int main()
{
	int n;
	printf("Enter number for which you want to calculate Factors  :  ");
	scanf("%d", &n);
	fabonici(n);

	return 0;
}

void fabonici(int n)
{
	int a = 1, b = 1;
	printf("%d  ", 0);
	printf("%d  ", 1);
	for (int i = 1; i <= n - 2; i++)
	{
		printf("%d  ", b);
		b = b + a;
		a = b - a;
	}
}

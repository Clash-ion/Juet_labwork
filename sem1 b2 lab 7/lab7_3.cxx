#include <stdio.h>
int hcf(int n1, int n2);

int main()
{
	int n1, n2;
	printf("Enter numbers for which you want to calculate Highest Common Factor ");
	scanf("%d %d", &n1, &n2);
	printf("HCF is %d", hcf(n1, n2));

	return 0;
}

int hcf(int n1, int n2)
{
	int c;
	if (n1 < n2)
	{
		for (int i = 1; i <= n1; i++)
		{
			if ( n1 % i == 0 && n2 % i == 0)
				c = i;
		}
	}
	else
	{
		for (int i = 1; i <= n2; i++)
		{
			if ( n2 % i == 0 && n1 % i == 0 )
				c = i;
		}
	}
	return c;
}

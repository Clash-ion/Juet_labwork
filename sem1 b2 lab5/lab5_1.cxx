#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int a = 1;a<=n;a++)
	{
		for(int c = n-a;c>0;c--)
		{
			printf(" ");
		}
		for(int b = 1;b<=a;b++)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
	for(int a = n-1;a>0;a--)
	{
		for(int c = n-a;c>0;c--)
		{
			printf(" ");
		}
		for(int b = 1;b<=a;b++)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main()
{
	int n,g=0,c,co=1,b;
	scanf("%d",&n);
	c=n;
	for(int a = 1;a<=n;a++)
	{
		g=(2*c)-2-(2*(a-1));
		for(;g>0;g--)
		{
			printf(" ");
		}
		g=0;
		int count = 0;
		for( b = a;a!=count;count++)
		{
			
			printf("%d ",b);
			b++;
		}
		
		for(  ;a!=co;co++)
		{
			
			printf("%d ",b-2);
			b--;
			
		}
		co = 1;
		printf("\n");
	}
	for(int a = n-1;a>0;a--)
	{
		g=(2*c)-2-(2*(a-1));
		for(;g>0;g--)
		{
			printf(" ");
		}
		g=0;
		int count = 0;
		for( b = a;a!=count;count++)
		{
			
			printf("%d ",b);
			b++;
		}
		
		for(  ;a!=co;co++)
		{
			
			printf("%d ",b-2);
			b--;
			
		}
		co = 1;
		printf("\n");
	}
	
	return 0;
}

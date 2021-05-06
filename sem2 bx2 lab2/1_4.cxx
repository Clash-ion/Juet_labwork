#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int m,n;
	printf("Input lower range and upper range :: ");
	scanf("%d %d",&m,&n);
			srand(time(0));
	int random;
		random = m + (rand() % (n-m+1) );
	printf("Output :: %d",random);
}
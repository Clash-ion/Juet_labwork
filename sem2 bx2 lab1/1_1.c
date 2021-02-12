#include <stdio.h>
int main()
{
	int i, j, lower;
	scanf("%d %d", &i, &j);
	lower = i % j;
	printf("%d", i + j - lower);
}
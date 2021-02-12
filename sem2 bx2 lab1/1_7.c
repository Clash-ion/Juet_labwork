#include <stdio.h>
#include <string.h>
int strend(char[], char[]);
int main()
{
	char array_1[100] ;
	char array_2[100] ;
	scanf("%[^\n]%*c",array_1);
	scanf("%[^\n]%*c",array_2);
	printf("%d", strend(array_1, array_2));
	return 0;
}
int strend(char a[], char b[])
{
	int length_a = strlen(a);
	int length_b = strlen(b);
	int count = 0;
	for (int i = length_b, j = length_a; i > 0; i--, j--)
	{
		if (a[j - 1] == b[i - 1])
		{
			count++;
		}
		else
		{
			return 0;
		}
		if (count == length_b)
			return 1;
	}
}
#include <stdio.h>
int stringlength(char *a)
{
	int i;
	char check = *a;
	for (i = 0; check != '\0'; i++)
	{
		check = *(a + i + 1);
	}
	return i;
}
int main()
{
	char str[20] ;
	scanf("%s",str);
	printf("%d", stringlength(str));
}

#include <stdio.h>
int main()
{
	char string[10000];// will use dynamic memory allocation to overcome large memory initialisation 
	int i;
	scanf("%[^\n]%*c",string);//taking input 
	for (i = 0; i < 10000; i++)
	{
		if (string[i] == '\0')//as string end with \0 
		{
			break;
		}
	}
	printf("%d",i );
}
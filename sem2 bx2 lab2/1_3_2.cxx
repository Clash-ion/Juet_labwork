#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char *string_input();
int main()
{
	int count = 0;
	char x = 'A';
	char **p = NULL;
	while (x)
	{
		scanf("%c", &x);
		switch (x)
		{
		case 'A':
		{
			*(p + count) = string_input();
			count++;
		}
		case 'B':
		{
			int del = 0;
			char *str = (string_input());
			if (count == 0)
				printf("Error69 zero name in database");
			else
				while (del != count)
				{
					if (str == *p)
						break;
					del++;
				}
			*(p + del) = NULL;
		}
		case 'C':
		{
			for (int i = 0; i < count; i++)
			{
				printf("%s", *(p + i));
			}
		}
		}
		if (x == 'N')
			break;
	}
	return 0;
}
char *string_input()
{
	char *p, ch;
	int len = 1;

	p = (char *)malloc(len * sizeof(char));

	while ((ch = getche()) != '\n')
	{
		*(p + len - 1) = ch;
		len++;
		p = (char *)realloc(p, len * sizeof(char));
	}

	*(p + len - 1) = '\0';
	return p;
}

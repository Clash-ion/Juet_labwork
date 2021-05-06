#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char *string_input(int *);

typedef struct arr
{
	char *pointer_to_char;
	int size;
} arr;

int main()
{
	int count = 0;
	char x = 'A';
	arr *A;

	A = (arr *)malloc(1 * sizeof(arr));

	while (x)
	{
		printf("A : Enter name\nB : Delete name\nC : Print all names\nE : Clear screen\nN : Exit program\n\n");
		x = getch();
		printf("%c\n", x);
		switch (x)
		{
			
		case 'A':
		{
			printf("Enter your name : \n");
			int size;
			(A + count)->pointer_to_char = string_input(&size);
			(A + count)->size = size - 1;
			count++;
			A = (arr *)realloc(A, (count + 1) * sizeof(arr));
			printf("\"%s\" registered successfully\n\n", (A + count - 1)->pointer_to_char);
			break;
		}
		case 'B':
		{
			printf("Enter name you want to delete\n");
			int del = 0, size;
			char *str = (string_input(&size));
			if (count == 0)
				printf("memory Error-database empty\n\n");
			else
			{
				while (del != count)
				{
					if (del == count)
						printf("not found - please enter a valid data");
					if (strcmp(str, (A + del)->pointer_to_char) == 0)
					{
						while (del != count - 1)
						{
							(A + del)->pointer_to_char = (A + del + 1)->pointer_to_char;
							del++;
						}
						A = (arr *)realloc(A, (count - 1) * sizeof(arr));
						count--;
							printf("data deleted successfully\n");
						break;
					}
					del++;
				}
			}
			break;
		}
		case 'C':
		{
			printf("You have entered :\n");
			if (count != 0)
				for (int i = 0; i < count; i++)
				{
					printf("%s\n", (A + i)->pointer_to_char);
					if (i == count - 1)
					{
						printf("\n");
					}
				}
			else
				printf("Nothing\n\n");
			break;
		}
		case 'E':
		{
			clrscr();
		}
		case 'N':
		{
			return 0;
		}
		default:
			printf("inputError-Invalid input\n\n");
		}
	}
}

char *string_input(int *size)
{
	char *p, ch;
	int len = 1;

	p = (char *)malloc(len * sizeof(char));

	while ((scanf("%c", &ch)) && ch != '\n')
	{
		*(p + len - 1) = ch;
		len++;
		p = (char *)realloc(p, len * sizeof(char));
	}
	*size = len;
	*(p + len - 1) = '\0';
	return p;
}
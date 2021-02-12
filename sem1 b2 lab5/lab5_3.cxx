#include <stdio.h>

int main()
{
	char n = 'G', k = 'A', l;
	int d = 0, j = 0;
	l = n;
	for (char st = 'A'; st <= n; st++, d++)
	{
		j = 0;
		if (d != 0)
			j = 2 + (d - 1) * 4;
		char ba = 'A';
		for (; ba <= l; ba++)
		{
			printf("%c ", ba);
		}

		for (int z = 0; z < j; z++)
		{
			printf(" ");
		}
		for (; ba >= k + 1; ba--)
		{
			if (ba - 1 == 'G')
			{
				continue;
			}
			printf("%c ", ba - 1);
		}
		printf("\n");
		l--;
	}
	return 0;
}
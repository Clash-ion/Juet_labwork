#include <stdio.h>
int main()
{
	for (int no = 1; no <= 9999; no++)
	{
		if ((no / 1000) % 10 == (no / 100) % 10 && (no / 10) % 10 == no % 10) 
		{
			for (int k = 1; k <= no; k++) 
			{
				if (k * k  == no)
				{
					printf("%d\n", k);
					break;
				}
			}
		}
	}
}
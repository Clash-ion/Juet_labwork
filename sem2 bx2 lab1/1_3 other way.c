#include <stdio.h>
int main()
{
	int i, array[4], i_backup;
	scanf("%d", &i);
	i_backup = i;
	for (int count = 0; count <= 3; count++)
	{
		array[count] = i % 10;
		i = i / 10;
	}
	if (array[0] == array[1] && array[2] == array[3])
	{
		for(int k =1;k<=i_backup/30;k++)
		{
			if(i_backup== k*k)
			{
				printf("%d",k);
				return 0;
			}
		}
		printf("Number is not a perfect square");
		
	}
	else
	{
		printf("Number is not of format AA BB");
	}
}
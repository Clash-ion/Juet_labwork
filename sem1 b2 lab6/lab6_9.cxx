#include <stdio.h>
int main()
{
	int mat[3][3];
	
	printf("Enter elements of matrix\n\n");
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix you entered is : \n\n");
		
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
	
}
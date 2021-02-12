#include <stdio.h>
int main()
{
	int mat[3][3], c;
	
	printf("Enter elements of matrix\n\n");
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
		printf("\n");
	}
	
	c = mat[0][1];
	mat[0][1] = mat[1][0];
	mat[1][0] = c;

	c = mat[0][2];
	mat[0][2] = mat[2][0];
	mat[2][0] = c;

	c = mat[1][2];
	mat[1][2] = mat[2][1];
	mat[2][1] = c;
	
	printf("Transpose of matrix\n\n");
		
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
#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int mat1[x][x], mat2[x][x];

	printf("Enter elements of matrix\n\n");

	for (int i = 0; i < x; i++)
	{
		int sum = 0;
		for (int j = 0; j < x; j++)
		{
			scanf("%d", &mat1[i][j]);
			sum += mat1[i][j];
			mat2[i][j] = 0;
		}
		printf("\n");
		mat2[i][i] = sum;
	}

	printf("Matrix is : \n\n");

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}
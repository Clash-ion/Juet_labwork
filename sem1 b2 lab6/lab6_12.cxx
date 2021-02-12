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

	printf("%d", (mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0])));

	return 0;
}
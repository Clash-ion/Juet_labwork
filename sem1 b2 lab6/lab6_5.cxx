#include <stdio.h>
int main()
{
	int n1, n2;
printf("enter no of elements in arr1 and arr2 respectively");
	scanf("%d %d", &n1, &n2);
	int arr1[n1];
	printf("enter elements of 1st array");
	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < n1; i++)
	{
		for (int j = i + 1; j < n1; j++)
		{
			if (arr1[j] < arr1[i])
			{
				int c = arr1[j];
				arr1[j] = arr1[i];
				arr1[i] = c;
			}
		}
	}
	printf("enter elements of 2nd array");
	int arr2[n2];
	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (int i = 0; i < n2; i++)
	{
		for (int j = i + 1; j < n2; j++)
		{
			if (arr2[j] < arr2[i])
			{
				int c = arr2[j];
				arr2[j] = arr2[i];
				arr2[i] = c;
			}
		}
	}
	int N = n1 + n2;

	int arr[N];
	for (int i = 0; i < N; i++)
	{
		
		if (i < n1)
		{
			arr[i] = arr1[i];
		}
		else
		{
			 arr[i] = arr2[i - n1];
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
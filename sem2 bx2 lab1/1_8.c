#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int array[n], k;
	for (int i = 0; i < n; i++)
	scanf("%d", &array[i]);
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[j] < array[i])
			{
				int c = array[j];
				array[j] = array[i];
				array[i] = c;
			}
		}
	}

	for (int i = n - k - 1; i < n; i++)
	{
		for (int j = k - 1 ; j < n ; j++ )
		{
			if (array[i] < array[j])
			{
				int c = array[i];
				array[i] = array[j];
				array[j] = c;
			}
		}
	}
	
		if (k==1)
			printf("%dst smallest number is %d and %dst largest number is %d",k,array[k-1],k,array[n-k]);
		else if (k==2)
			printf("%dnd smallest number is %d and %dnd largest number is %d",k,array[k-1],k,array[n-k]);
		else if (k==3)
			printf("%drd smallest number is %d and %drd largest number is %d",k,array[k-1],k,array[n-k]);
		else
			printf("%dth smallest number is %d and %dth largest number is %d",k,array[k-1],k,array[n-k]);
return 0; 
}
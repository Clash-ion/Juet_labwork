#include <stdio.h>

void minmax(int array[], int length, int *min, int *max);

int main()
{
	int N;
	scanf("%d",&N);
	int arr[N],min=0,max=0;
	for(int i = 0; i<N; i++)
		scanf("%d",&arr[i]);
	minmax(arr,N,&min,&max);
	printf("min : %d\nmax : %d",min,max);
return 0;
}

void minmax(int array[], int length, int *min, int *max)
{
	*max = array[0];
	*min = array[0];
	for (int i = 0; i < length; i++)
	{
		if (array[i] > *max)
			*max = array[i];
	}
	for (int i = 0; i < length; i++)
	{
		if (array[i] < *min)
			*min = array[i];
	}
}
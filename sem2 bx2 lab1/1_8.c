#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int array[n],k;
	for(int i= 0;i<n;i++)
		scanf("%d",&array[i]);
	for ( int i=0;i<n;i++)
		for (int j = i+1;j<n;j++)
		{
			if(array[j]<array[i])
			{
			int c= array[j];
			array[j]=array[i];
			array[i]= c;
			}
		}

	scanf("%d",&k);
	
	printf("%d  smallest from start is %d\n%d largest from end is %d",k,array[k-1],n-k,array[n-k]);
	
}
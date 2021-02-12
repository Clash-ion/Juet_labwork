#include <stdio.h>
int main()
{
	int n;
	
	scanf("%d",&n);
	int arr [n];
	for ( int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for ( int i=0;i<n;i++)
	{
		for (int j = i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
			int c= arr[j];
			arr[j]=arr[i];
			arr[i]= c;
			}
		}
	}
	printf("%d",arr[n-1]);
	
	return 0; 
}
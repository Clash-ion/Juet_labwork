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
	if(n%2==0)
	{
		float ans;
		ans=(arr[n/2]+arr[(n/2)-1])/2.0;
		printf("%.1f",ans);
	}
	else
	{
		int ans;
		ans=arr[(n/2)];
		printf("%d",ans);
	}
	
	return 0; 
}
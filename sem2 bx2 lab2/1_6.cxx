#include <stdio.h>

int getMissingNo(int a[], int n)
{
 int sum = 0 ;
 for (int i= 0; i<n-1;i++)
 {
 	sum += a[i];
 }
 return ((n*(n+1))/2)-sum;
}
int main()
{
    int n;
     printf("ENTER THE SIZE OF ARRAY  \n");
     
  scanf("%d",&n);
  int arr[n] ;
  printf("ENTER THE VALUES  ");
  for (int  i = 0; i < n-1; i++)
  {
    scanf("%d",&arr[i]);
  } 
  printf("%d",getMissingNo( arr, n));
}
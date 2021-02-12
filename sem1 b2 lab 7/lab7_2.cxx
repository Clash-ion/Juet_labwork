#include <stdio.h>
void swap(int *chg1,int *chg2);

int main()
{
	int n1,n2;
	printf("Enter numbers which you want to swap  ");
	scanf("%d %d",&n1,&n2);
	printf("Original number1 is %d and number2 is %d\n",n1,n2);
	swap(&n1,&n2);
	printf("After swaping number1 is %d and number2 is %d",n1,n2);
	
	return 0; 
}

void swap(int *chg1,int *chg2)
{
	int c = *chg1;
	*chg1= *chg2;
	*chg2= c;
} 

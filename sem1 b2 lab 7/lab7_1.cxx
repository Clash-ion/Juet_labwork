#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(int a,int b);
int main()
{
	int s,n1,n2;
	printf("Enter number corresponding to operators :\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n");
	scanf("%d",&s);
	printf("Enter your operands  ");
	scanf("%d %d",&n1,&n2);
	printf("Your output is :");
	switch(s){
	case 1:
	printf("%d",add(n1,n2));
	break;
	case 2:
	printf("%d",sub(n1,n2));
	break;
	case 3:
	printf("%d",mul(n1,n2));
	break;
	case 4:
	printf("%f",div(n1,n2));
	break;
	}
	return 0; 
}

int add(int a,int b)
{
	return a+b;
} 
int sub(int a,int b)
{
	return a-b;
} 
int mul(int a,int b)
{
	return a*b;
} 
float div(int a,int b)
{
	return (a*1.0)/(b*1.0);
} 
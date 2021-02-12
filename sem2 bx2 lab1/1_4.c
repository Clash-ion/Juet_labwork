#include <stdio.h>
int factorial(int);
int main()
{
	int user_input_number;
	scanf("%d", &user_input_number);
	printf("%d", factorial(user_input_number));
}
int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
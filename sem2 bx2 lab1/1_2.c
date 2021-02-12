#include <stdio.h>

int main()
{
	int i,count=0,i_backup,tester;
	scanf("%d",&i);
	i_backup= i;
	while(i_backup!=0)
	{
		tester=i_backup%10;
		i_backup/=10;
		if(tester==9 || tester == 8|| tester == 7|| tester == 6)
		{
			printf("Invalid number");
			return 0;
		}
		count++;
	}
	printf("%d",count);
	return 0;
}

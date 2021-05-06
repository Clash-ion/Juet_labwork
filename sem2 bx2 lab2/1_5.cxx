#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct automobile
{
	char serialnumber[4];
	int year_of_manafacturing;
	char materialtype[10];
	int quantity;
};
int main()
{
	srand(time(0));
	struct automobile car1[60];
	char serial_identity[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
	char material_type[3][10] = {"Steel", "Aluminium", "Iron"};

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			car1[(10 * i) + j].serialnumber[0] = serial_identity[i];
			car1[(10 * i) + j].serialnumber[1] = serial_identity[i];
			car1[(10 * i) + j].serialnumber[2] = j+48;
			car1[(10 * i) + j].serialnumber[3] = '\0';
			car1[(10 * i) + j].year_of_manafacturing = 1990 + (rand() % (2018 - 1990 + 1));
			strcpy(car1[(10 * i) + j].materialtype, material_type[0 + (rand() % (2 + 1))]);
			car1[(10 * i) + j].quantity = 1 + (rand() % (1000 - 1 + 1));
		}
	}
	for (int i = 1; i <= 2; i++)
		for (int j = 0; j < 10; j++)
		{
			if (i == 2 && j == 6)
				return 0;
			printf("%s\t%d\t%s\t%d\n", car1[(10 * i) + j].serialnumber, car1[(10 * i) + j].year_of_manafacturing, car1[(10 * i) + j].materialtype, car1[(10 * i) + j].quantity);
		}
}
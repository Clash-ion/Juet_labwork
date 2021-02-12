#include <stdio.h>
int main()
{
	// concat krega ye program agar string_1 ki length + string_2 ki length string_1 ki array ke length se kam ho

	char string1[50], string2[50], i, j;
	scanf("%s", string1);
	scanf("%s", string2);
	for (i = 0; *(string1 + i) != '\0'; ++i)
		;										  //ye wala string1 ka length calculate krega bs
	for (j = 0; *(string2 + j) != '\0'; ++j, ++i) // ye wala loop concat krega
	{
		*(string1 + i) = *(string2 + j);
	}
	*(string1 + i) = '\0'; //ye string1 = string1+string2 krne ke baad jo string1 ka last element hai uske end me null character add krdega jisse ki ek proper string bn jai
	printf("%s", string1);
	return 0;
}
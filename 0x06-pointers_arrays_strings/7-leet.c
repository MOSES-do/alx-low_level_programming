#include <stdio.h>


char *leet(char *str)
{

	int i = 0, arrindx = 0;
	char arr[5] = {97, 101, 111, 116, 108};
	char arr1[5] = {65, 69, 79, 76, 84};
	char leet[5] = {52, 51, 48, 55, 49};



	while (str[i])
	{
		for (arrindx = 0; arrindx < 5; arrindx++)
		{
			if (arr[arrindx] == str[i] || arr1[arrindx] == str[i])
				str[i] = leet[arrindx];
		}
		i++;
	}
	return (str);
}

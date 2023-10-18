#include <string.h>
#include <stdio.h>


/**
* *_strncat - function to print source and dest in dest. 
* Output of source is dependent on n
* @dest: param 1
* @src: param 2
* @n: param 3
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	/*char *str;*/
	
	for (i = 0; i < n;  i++)
	{
		putchar(src[i]);
		/*putchar(&src[i]);*/
		/**str = &src[i];*/
		/*strcat(dest, *src[i]);*/
	}


	return (dest);


	putchar('\n');
}

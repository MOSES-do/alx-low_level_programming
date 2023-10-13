#include "main.h"



void multiply(int a, int b)
{
	int r = (a * b);
	
	printf("%d\n", r);
}


int main(void)
{
	multiply(98, 1024);
	multiply(-402, 4096);

	return (0);
}

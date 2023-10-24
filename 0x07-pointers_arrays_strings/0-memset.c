/**
* _memset - function
* @s: param 1 (pointer to buffer adderss)
* @b: param 2 (value to fill buffer n times)
* @n: size of buffer
* Return: pointer to buffer
*/



char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;


	return (memory);
}

/**
* prime_num - function
* @n: param 1
* @num: param 2
* Return: ALways 0
*/

int prime_num(int n, int num)
{
	if (n % num == 0)
		return (0);

	if (num == n / 2)
		return (1);

	return (prime_num(n, num + 1));
}



/**
* is_prime_number - function to check for a prime number
* @n: param 1
* Return: Always Success (0)
**/

int is_prime_number(int n)
{
	int num = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (prime_num(n, num));
}

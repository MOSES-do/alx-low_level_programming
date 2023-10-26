/**
* sqr_multiplier - Tail recursion that multiiplies num until it finds the
*		natural square or exits with (-1)
* @num: param 1
* @multiplier: incrementing number
* Return: recursive call of self
*/

int sqr_multiplier(int num, int multiplier)
{
	if (multiplier * multiplier == num)
		return (multiplier);

	if (multiplier == num / 2)
		return (-1);

	return (sqr_multiplier(num, multiplier + 1));
}


/**
* _sqrt_recursion - function that checks (n)
* @n: param 1
* Return: Calls sqr_multiplier function
*/

int _sqrt_recursion(int n)
{
	int multiplier = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqr_multiplier(n, multiplier));
}


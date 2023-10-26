
/**
* _pow_recursion - function to raise x to the power of y
* @x: param 1
* @y: param 2
* Return: Always 0 (Succes) (x);
*/



int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	x = x * _pow_recursion(x, y - 1);

	return (x);
}

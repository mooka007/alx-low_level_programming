#include "main.h"
/**
 * _sqrt_recurs - check the natural square root
 * @x: number
 * @y: incrementor
 * Return: the result of square root
 */
int _sqrt_recurs(int x, int y)
{
	if (y == (x * x))
	{
		return (x);
	}
	else if (x == y || x == -y)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recurs(x + 1, y));
	}
}

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: integer number
 * Return: the value of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recurs(1, n));
}

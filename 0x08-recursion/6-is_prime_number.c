#include "main.h"

/**
 * _detects - detects to see if number is prime
 * @x:integer
 * @y:integer
 * Return:integer
 */
int _detects(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x > y / 2)
	{
		return (1);
	}
	else
	{
		return (_detects(x + 1, y));
	}
}

/**
 * is_prime_number - calculates if a number is prime recursively
 * @n:integer
 * Return:integer
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (_detects(2, n));
}

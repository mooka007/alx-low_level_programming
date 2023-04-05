#include "main.h"

/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */

int factorial(int n)
{
	int i;

	i = n;
	if (n < 0 || n > 12)
	{
		return (0);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	while (i > 1)
	{
		n = n * (i - 1);
		i--;
	}
	return (n);
}



#include "main.h"

/**
 *_islower - tests if the character is lowercase
 * @c: argument
 * Return: 1 if the character is lowercase, and 0 if its not
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


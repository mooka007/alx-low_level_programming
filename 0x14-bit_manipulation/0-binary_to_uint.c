#include "main.h"

/**
 * binary_to_uint - Entry Point
 * Owned By MoOka
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int x = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		i++;
	}
	while (i >= 0)
	{
		conv += ((b[i] - '0') * x);
		x *= 2;
		i--;
	}

	return (conv);
}

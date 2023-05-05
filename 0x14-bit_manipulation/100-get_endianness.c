#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Owned By MoOka
 * Return: If big-endian - 0
 */
int get_endianness(void)
{
	int b = 1;
	char *c = (char *)&b;

	if (*c == 1)
	{	
		return (1);
	}
	return (0);
}

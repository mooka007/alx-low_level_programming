#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * Owned By MoOka
 * @n: pointer
 * @index: index
 * Return: If an error occurs - -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}

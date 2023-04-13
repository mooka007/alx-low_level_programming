#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * owned By MoOka
 * @b: bytes to allocate
 * Return: a pointer
 */


void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (memo == NULL)
	{
		exit(98);
	}
	return (memo);
}

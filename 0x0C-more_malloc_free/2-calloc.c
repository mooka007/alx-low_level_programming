#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * Owned By MoOka
 * @nmemb: allocate memory
 * @size: allocate element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); a++)
	{
		ptr[b] = 0;
	}
	return (ptr);
}

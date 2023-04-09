#include "main.h"

/**
 * _memcpy - function copies memory area
 * owned By MoOka
 * @dest: to memory area
 * @src: source
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char  *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

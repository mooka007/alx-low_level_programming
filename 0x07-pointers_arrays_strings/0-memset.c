#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @
 * @n: bytes of the memory area pointed to by @s
 * @s: with the constant byte @
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}

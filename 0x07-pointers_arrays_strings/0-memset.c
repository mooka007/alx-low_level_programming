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
	int i;
	
	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

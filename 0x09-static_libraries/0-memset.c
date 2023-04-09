#include "main.h"

/**
 * _memset - function fill memory with a constant byte
 * owned By MoOka
 * @n: bytes
 * @s: Constant Byte
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

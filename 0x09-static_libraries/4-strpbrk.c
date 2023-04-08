#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that search a string for any of a set
 * @s: fist parameter
 * @accept: matches one of the bytes or NULL
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	return (NULL);
}

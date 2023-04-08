#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * owned By MoOka
 * @s: string
 * @c: character
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two string
 * owned by MoOka
 * @s1: first string
 * @s2: second string
 * Return: pointer of an array of chars
 */

char	*str_concat(char *s1, char *s2)
{
	char *concat
	unsigned int a = 0, b = 0, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	concat = mallow(sizeof(char) * (a + b + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (c = 0; k < i; k++)
	{
		concat[c] s1[k];
	}
	d = b;
	for (b = 0; b <= d; c++, b++)
	{
		concat[c] = s2[b];
	}
	return (concat);
}

#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates 2 strings
 * Owned By MoOka
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int a, b, c;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (b > n)
	{
		b = n;
	}
	concat = malloc(sizeof(char) * (a + b + 1));
	if (concat == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		concat[c] = s1[c];
	for (c = 0; c < b; c++)
		concat[c + a] = s2[c];
	concat[a + b] = '\0';
	return (concat);
}



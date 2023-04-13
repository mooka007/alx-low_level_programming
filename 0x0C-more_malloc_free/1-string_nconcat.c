#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - function that concatenates 2 strings
 * Owned By MoOka
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = _strlen(s1);
	unsigned int l2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= l2)
	{
		n = l2;
	}

	concat = malloc((l1 + n + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	_strcpy(concat, s1);
	_strncat(concat, s2, n);
	concat[l1 + n] = '\0';
	return (concat);
}



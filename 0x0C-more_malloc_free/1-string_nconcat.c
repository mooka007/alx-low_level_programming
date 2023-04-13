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
	unsigned int l11 = 0;
	unsigned int l22 = 0;
	unsigned int i;

	while (s1[l11] != '\0')
		l11++;
	while (s2[l22] != '\0')
		l22++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > l22)
	{
		n = l22;
		concat = malloc((l11 + l22 + 1) * sizeof(char));
	}
	else
		concat = malloc((l11 + n + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l11 + n; i++)
	{
		if (i < l11)
		{
			concat[i] = s1[i];
		}
		else
		{
			concat[i] = s2[i - l11];
		}
	}
	concat[i] = '\0';
	return (concat);
}



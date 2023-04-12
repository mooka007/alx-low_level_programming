#include "main.h"
#include <stdlib.h>

/**
 * _strdup - write a function that returns a pointer
 * to a newly allocated space
 * Owned By MoOka
 * @str: string
 * Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *x;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	x = (char *)malloc((sizeof(char) * len) + 1);
	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		x[i] = str[i];
	}
	x[len] = '\0';
	return (x);
}

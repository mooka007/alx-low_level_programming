#include "main.h"

/**
 * _strncat - concatenates two Strings
 * owned By MoOka
 * @dest: 1st parameter
 * @src: sec parameter
 * @n: the length
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}


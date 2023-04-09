#include "main.h"


/**
 * _strcat - concatenate 2 strings
 * owned By MoOka
 * @dest: 1st parameter
 * @src: 2sec parameter
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j])
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}

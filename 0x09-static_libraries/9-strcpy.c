#include "main.h"

/**
 * _strcpy - copy the string pointed from src to dest
 * owned By MoOka
 * @dest: argument
 * @src: argument
 * Return: 0 is success
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

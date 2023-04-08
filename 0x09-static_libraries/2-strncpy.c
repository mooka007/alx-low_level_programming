#include "main.h"

/**
* _strncpy - copy string from src to dest path
* @dest: destination
* @src: source
* @n: the counter
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

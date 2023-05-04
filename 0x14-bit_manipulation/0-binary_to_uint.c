#include "main.h"
#include <stddef.h>


/**
 *  *_strlen - return the length of a string
 * Owned By MoOka
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * binary_to_uint - function that converts a binary number
 * Owned By MoOka
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit_value = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = _strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += bit_value;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		bit_value *= 2;
	}
	return (result);
}

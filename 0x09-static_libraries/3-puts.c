#include "main.h"

/**
 * _puts - write a string
 * Owned By MoOka
 * @s: argument
 * Return: the length of the string
 */

void	_puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}


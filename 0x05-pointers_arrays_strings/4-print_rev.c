#include "main.h"
/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void	print_rev(char *s)
{
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


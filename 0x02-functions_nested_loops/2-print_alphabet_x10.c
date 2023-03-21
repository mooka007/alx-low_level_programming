#include "main.h"

/**
 * Print_alphabet_x10 - repeats the print_alphabet 10 times.
 * Return;
 */

void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}

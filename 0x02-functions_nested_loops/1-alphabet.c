#include "main.h"

/**
 *  print_alphabet - prints the english alphabet from a-z.
 *  Return
 */


void print_alphabet(void)
{
	char letter;

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

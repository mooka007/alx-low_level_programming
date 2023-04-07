#include <unistd.h>

/**
 * _putchar - write a character to stdout
 * @c: argument
 *
 * Return : On Success 1.
 */

void	_putchar(char c)
{
	write(1, &c, 1);
}

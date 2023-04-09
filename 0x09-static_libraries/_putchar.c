#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character a to standard output
 * @a: the character to print
 * Return: on success 1.
 * on error. -1 is returned.
*/
int _putchar(char a)
{
		return (write(1, &a, 1));
}

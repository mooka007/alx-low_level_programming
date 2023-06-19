#include "main.h"

/**
 * _puts - prints a string to stdout
 * Author - MoOka
 * @str: pointer to the string to print
 * Return: a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

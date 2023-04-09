#include "main.h"

/**
 * main - program that prints its name
 * Owned By MoOka
 * @argv: argument
 * @argc: argument count
 * Return: 0
 */

int	main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0' && argc)
	{
		_putchar(argv[0][i]);
		++i;
	}
	_putchar('\n');
	return (0);
}

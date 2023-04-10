#include <stdio.h>

/**
 *  main - program that prints all arguments
 *  Owned By MoOka
 *  @argc: argument count
 *  @argv: argument vector
 *  Return: All Arguments should be printed
 */

int	main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

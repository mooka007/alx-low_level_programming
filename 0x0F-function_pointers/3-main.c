
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - perform operations
 * Owned By MoOka
 * @argc: arguments
 * @argv: array of pointers
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

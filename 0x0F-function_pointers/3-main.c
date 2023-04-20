
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

int main(int  argc, char *argv[])
{
	int n1, n2;
	char *o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	o = argv[2];
	n2 = atoi(argv[3]);
	if (get_op_func(o) == NULL || o[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' && n2 == 0) || (*o == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(o)(n1, n2));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds positive numbers
 * Owned By MoOka
 * @argc: argument count
 * @argv: argument vector
 * Return: sum of numbers
 */

int	main(int argc, char *argv[])
{
	int num;
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

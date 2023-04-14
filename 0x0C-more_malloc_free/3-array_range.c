#include "main.h"
#include <stdlib.h>

/**
 * array_range - write function that creates an array of integers
 * Owned By MoOka
 * @min: min
 * @max: max
 * Return: the pointer to the newly created Array
 */

int *array_range(int min, int max)
{
	int *arr;
	int num, i;

	if (minx > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

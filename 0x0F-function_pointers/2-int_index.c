#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * Owned By MoOka
 * @array: array
 * @size: size
 * @cmp:  function pointer that points to a comparison function.
 * Return: int value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != '\0')
			return (i);
	}
	return (-1);
}

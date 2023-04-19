#include "function_pointers.h"

/**
 * array_iterator - function that executes given as a parameter
 * on each element of an array
 * Owned By MoOka
 * @array: array
 * @size: size of the array
 * @action: This specifies that action is a pointer to a function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

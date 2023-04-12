#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function creates an array of chars
 * Owned By MoOka
 * @size: the size of Array
 * @c: value
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

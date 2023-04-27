#include "lists.h"

/**
 * list_len - function that return  a number of element
 * @h: linked list
 * Return:  number of elements
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}

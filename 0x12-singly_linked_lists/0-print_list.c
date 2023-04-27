#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list.
 * Owned By MoOka
 * @h: linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[%d} %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d} %s\n", h->len, h->str);
		}
		x++;
		h = h->next;
	}

	return (x);
}

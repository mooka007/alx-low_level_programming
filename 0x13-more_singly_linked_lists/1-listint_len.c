#include "lists.h"

/**
 * listint_len - function that returns the number of elements in listint_t list
 * Owned By MoOka
 * @h: pointer to head
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

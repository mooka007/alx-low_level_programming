#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list
 * Owned By MoOka
 * @head: pointer to the head
 * @index: index of node to locate
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *curr = head;

	for (i = 0; curr != NULL && i < index; i++)
	{
		curr = curr->next;
	}
	return (curr);
}

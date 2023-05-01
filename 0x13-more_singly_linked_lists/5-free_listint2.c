#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * Owned By MoOka
 * @head: pointer to the header
 */

void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}

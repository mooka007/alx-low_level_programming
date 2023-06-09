#include "lists.h"


/**
 * free_listint -  function that frees a listint_t list
 * Owned By MoOka
 * @head: pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head->next;
		free(head);
		head = x;
	}
}

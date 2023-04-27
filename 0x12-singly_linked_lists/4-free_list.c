#include "lists.h"

/**
 * free_list - function that frees a list_t
 * Owned By MoOka
 * @head: head
 * Return: always 0.
 */

void	free_list(list_t *head)
{
	list_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}

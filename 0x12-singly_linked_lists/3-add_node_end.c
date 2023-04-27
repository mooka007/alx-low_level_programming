#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *lnode;
	size_t n;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (n = 0; str[n]; n++)
		;
	node->len = n;
	node->next = NULL;
	lnode = *head;

	if (lnode == NULL)
	{
		*head = node;
	}
	else
	{
		while (lnode->next != NULL)
		{
			lnode = lnode->next;
		}
		lnode->next = node;
	}
	return (*head);
}


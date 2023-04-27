#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * Owned By MoOka
 * @head: the head
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *mall;
	size_t x;

	mall = malloc(sizeof(list_t));
	if (mall == NULL)
	{
		return (NULL);
	}

	mall->str = strdup(str);

	for (x = 0; str[x]; x++)
		;

	mall->len = x;
	mall->next = *head;
	*head = mall;

	return (*head);
}

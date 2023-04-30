#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * Owned By MoOka
 * @head: pointer to the address of the head
 * @n: integer
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *allo;

	allo = malloc(sizeof(listint_t));
	if (allo == NULL)
	{
		return (NULL);
	}

	allo->n = n;
	allo->next = *head;
	*head = allo;
	return (allo);
}

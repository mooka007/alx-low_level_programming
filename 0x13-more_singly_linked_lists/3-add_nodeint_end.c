#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list
 * Owned By Mooka
 * @head: pointer to the address
 * @n: integer
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mall, *x;

	mall = malloc(sizeof(listint_t));
	if (mall == NULL)
		return (NULL);
	mall->n = n;
	mall->next = NULL;

	if (*head == NULL)
	{
		*head = mall;
		return (mall);
	}
	x = *head;
	while (x->next != NULL)
	{
		x = x->next;
	}
	x->next = mall;
	return (mall);
}

#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the * head node’s data
 * Owned By MoOka
 * @head: pointer to the head
 * Return: 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}

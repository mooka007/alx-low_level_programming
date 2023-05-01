#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * Owned By MoOka
 * @head: pointer to the head
 * Return: 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

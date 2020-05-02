#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a linked list.
 * @head: is a parameter
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i;
	dlistint_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

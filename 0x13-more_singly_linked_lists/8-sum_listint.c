#include "lists.h"
/**
 * sum_listint - that returns the sum of all the data (n) of a linked list.
 * @head: is a parameter
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *nAux = head;
	int i, sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0; nAux != NULL; i++)
	{
		sum += nAux->n;
		nAux = nAux->next;
	}
	return (sum);
}

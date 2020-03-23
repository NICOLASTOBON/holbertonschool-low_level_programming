#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: is a pointer
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *nAux;
	int res;

	if (*head == NULL || head == NULL)
		return (0);

	nAux = (*head)->next;
	res = (*head)->n;
	free(*head);
	*head = nAux;

	return (res);
}

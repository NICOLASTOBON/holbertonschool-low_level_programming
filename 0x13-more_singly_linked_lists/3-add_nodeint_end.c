#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: is a parameter
 * @n: is a data
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *nAux = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (nAux->next != NULL)
		nAux = nAux->next;
	nAux->next = new;
	return (new);
}

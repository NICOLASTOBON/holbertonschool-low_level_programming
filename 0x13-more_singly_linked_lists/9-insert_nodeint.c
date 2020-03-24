#include "lists.h"
/**
 * insert_nodeint_at_index - that inserts a new node at a given position.
 * @head: is a parameter
 * @idx: is the index of the list
 * @n: is a number
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nAux = *head;
	listint_t *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}
	for (i = 0; nAux != NULL; i++)
	{
		if (i == (idx - 1))
		{
			new->n = n;
			new->next = nAux->next;
			nAux->next = new;

			return (new);
		}
		nAux = nAux->next;
	}
	return (NULL);
}

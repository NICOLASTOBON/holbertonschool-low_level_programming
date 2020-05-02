#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx:  s the index of the list
 * @h: is a parameter
 * @n: is a value
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i;

	current = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	for (i = 0; current != NULL; i++)
	{
		if (i == idx)
		{
			new->next = current, new->prev = current->prev;
			current->prev->next = new, current->prev = new;
			return (new);
		}
		current = current->next;
	}
	if ((i == idx))
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	free(new);
	return (NULL);
}

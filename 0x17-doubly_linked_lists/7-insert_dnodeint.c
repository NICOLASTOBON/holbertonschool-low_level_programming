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
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		current->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == (idx - 1))
		{
			new->next = current->next;
			new->prev = current;
			current->next = new;
			if (current->next == NULL)
				continue;
			else
				current->next->prev = new;
			return (new);
		}
		current = current->next;
	}
	return (NULL);
}

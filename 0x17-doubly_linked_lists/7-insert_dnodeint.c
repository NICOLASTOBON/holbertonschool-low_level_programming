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
	if (h == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	for (i = 0; current != NULL; i++)
	{
		if ((i == (idx - 1)) && (current->next != NULL))
		{
			new->next = current->next, new->prev = current;
			current->next = new, current->next->prev = new;
			return (new);
		}
		else if ((i == (idx - 1)) && (current->next == NULL))
		{
			free(new);
			return (add_dnodeint_end(h, n));
		}
		current = current->next;
	}
	return (NULL);
}

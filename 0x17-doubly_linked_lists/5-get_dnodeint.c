#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: is a parameter
 * @index: index is the index of the node
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}
	return (current);
}

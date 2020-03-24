#include "lists.h"
/**
 * get_nodeint_at_index - that returns the nth node of a linked list
 * @head: is a parameter
 * @index: is the index node
 * Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nAux = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; nAux != NULL; i++)
	{
		if (i == index)
			return (nAux);
		nAux = nAux->next;
	}
	return (nAux);
}

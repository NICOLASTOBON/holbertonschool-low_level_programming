#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: is a parameter
 * @index: is the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *aux;
	unsigned int i;

	current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == (index - 1))
		{
			aux = current->next;
			current->next = aux->next;
			free(aux);

			return (1);
		}
		current = current->next;
	}
	return (-1);
}

#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: is a parameter
 * @index: is the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if ((index == 0))
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL; i++)
	{
		if ((i == index) && (current->next != NULL) && (current->prev != NULL))
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		else if ((i == index) && (current->next == NULL))
		{
			current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}

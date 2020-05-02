#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: is a parameter
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}

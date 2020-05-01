#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: is a parameter
 * @n: is a value
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (current == NULL)
	{
		new->prev = NULL;
		*head = new;

		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	new->prev = current;
	current->next = new;

	return (new);
}

#include "lists.h"
/**
 * add_nodeint -  that adds a new node at the beginning of a list
 * @head: is a pointer
 * @n: is a value
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

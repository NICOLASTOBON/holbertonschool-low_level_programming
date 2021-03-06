#include "lists.h"
/**
 * free_listint2 - function that frees a list.
 * @head: is a pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nAux;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		nAux = *head;
		*head = (*head)->next;
		free(nAux);
	}
}

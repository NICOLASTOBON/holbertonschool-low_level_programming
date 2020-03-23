#include "lists.h"
/**
 * free_listint - function that frees a list.
 * @head: is a pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nAux;

	while (head != NULL)
	{
		nAux = head;
		head = head->next;
		free(nAux);
	}
	head = NULL;
}

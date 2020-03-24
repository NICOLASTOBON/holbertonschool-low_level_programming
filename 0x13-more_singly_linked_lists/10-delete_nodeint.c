#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: is a parameter
 * @index: is the index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nAux = *head;
	listint_t *nAux2;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = nAux->next;
		free(nAux);
		return (1);
	}
	for (i = 0; nAux != NULL; i++)
	{
		if (i == index - 1)
		{
			nAux2 = nAux->next;
			nAux->next = nAux2->next;
			free(nAux2);
			return (1);
		}
		nAux = nAux->next;
	}
	return (-1);
}

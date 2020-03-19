#include "lists.h"
/**
 * _strlen - return length of string
 * @str: is a parameter
 * Return: length
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: is a parameter
 * @str: is a string
 * Return: new nodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *nAux = *head;

	int len = _strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (nAux->next != NULL)
		nAux = nAux->next;
	nAux->next = new;

	return (new);
}

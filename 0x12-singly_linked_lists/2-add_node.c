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
 * createNodo - nodo created
 * @str: is a parameter
 * @len: is a length
 * Return: new nodo
 */
list_t *createNodo(const char *str, unsigned int len)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	return (new);
}
/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: is a parameter
 * @str: is a parameter
 * Return: sucess
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = createNodo(str, _strlen(str));

	new->next = *head;
	*head = new;

	return (0);
}

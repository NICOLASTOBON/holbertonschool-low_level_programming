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
 * add_node - function that adds a new node at the beginning of a list_t
 * @head: is a parameter
 * @str: is a parameter
 * Return: sucess
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = strlen(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

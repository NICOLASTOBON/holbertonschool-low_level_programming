#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: is a parameter
 */
void free_list(list_t *head)
{
	list_t *pos, *next;

	pos = head;

	while (pos != NULL)
	{
		next = pos->next;
		free(pos->str);
		free(pos);
		pos = next;
	}
	head = NULL;
}

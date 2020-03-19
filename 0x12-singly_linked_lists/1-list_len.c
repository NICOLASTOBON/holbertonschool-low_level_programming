#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a linked
 * @h: is a parameter
 * Return: numbers of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}

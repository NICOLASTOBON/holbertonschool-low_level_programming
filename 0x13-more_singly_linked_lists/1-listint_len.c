#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a list
 * @h: is a parameter
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

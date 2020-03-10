#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 * @name: is a parameter
 * @age: is a parameter
 * @owner: is a parameter
 * Return: Always (d)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, j;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	new->name = malloc(sizeof(i));
	if (new->name == NULL)
	{
		return (NULL);
	}
	else
	{
		new->name = name;
	}
	new->age = age;
	for (j = 0; owner[j]; j++)
		;
	new->owner = malloc(sizeof(j));
	if (new->owner == NULL)
	{
		return (NULL);
	}
	else
	{
		new->owner = owner;
	}

	return (new);
}

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
	dog_t *d;
	int i, j;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	d->name = malloc(sizeof(i));
	if (d->name == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->owner = malloc(sizeof(j));
	if (d->owner == NULL)
		return (NULL);
	d->owner = owner;

	free(d);
	return (d);
}

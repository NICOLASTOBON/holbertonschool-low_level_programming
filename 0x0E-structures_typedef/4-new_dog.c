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

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}

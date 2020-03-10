#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	char *new_name, *new_owner;
	int i, j;

	i = strlen(name);
	j = strlen(owner);

	new_name = malloc(sizeof(i + 1));
	if (new_name == NULL)
	{
		return (NULL);
	}
	new_owner = malloc(sizeof(j + 1));
	if (new_owner == NULL)
	{
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}

#include <stdlib.h>
#include "dog.h"
/**
* _strlen - function that calculates lenght of a string
* @str: string
* Return: the size  of the string
*/
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
	{
		i++;
	}
return (i);
}
/**
**_strcpy-function that copy an array
*@dest: variable that copy the array
*@src: array to copy
*Return: the array copied
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
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

	i = _strlen(name);
	j = _strlen(owner);

	new_name = malloc(i + 1);
	if (new_name == NULL)
	{
		return (NULL);
	}
	new_owner = malloc(j + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}

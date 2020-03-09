#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: is a parameter
 * @age: is a parameter
 * @owner: is a parameter
 * @d: is a parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

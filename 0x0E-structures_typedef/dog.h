#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a struct
 * @name: is a parameter
 * @age: is a parameter
 * @owner: is a parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

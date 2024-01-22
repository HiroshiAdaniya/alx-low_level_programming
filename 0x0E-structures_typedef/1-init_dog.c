#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type dog
 * @d: pointer to a struct
 * @name: pointer to a char
 * @age: a float
 * @owner: a pointer to a char
 * Return: always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

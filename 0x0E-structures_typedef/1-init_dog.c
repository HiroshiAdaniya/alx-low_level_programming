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
	int i = 0;

	while (name[i] != '\0')
		i++;
	d->name = malloc(i + 1);
	while (name[i] != '\0')
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	d->age = age;
	i = 0;
	while (owner[i] != '\0')
		i++;
	d->owner = malloc(i + 1);
	while (owner[i] != '\0')
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->owner[i] = '\0';
}

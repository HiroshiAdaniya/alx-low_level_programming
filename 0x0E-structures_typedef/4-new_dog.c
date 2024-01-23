#include "dog.h"
#include <stdlib.h>
int length(char *);
char *copys(char *, char *);
/**
 * new_dog - stores data for a new dog
 * @name: pointer to a string of char
 * @age: float
 * @owner: pointer to a string of char
 * Return: A pointer to a new data type, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pet;
	int i, j = 0;

	pet = malloc(sizeof(dog_t));
	if (pet == NULL)
		return (NULL);
	i = 1 + length(name);
	j = 1 + length(owner);
	pet->name = malloc(sizeof(char) * i);
	if (pet->name == NULL)
	{
		free(pet);
		return (NULL);
	}
	pet->owner = malloc(sizeof(char) * j);
	if (pet->owner == NULL)
	{
		free(pet->name);
		free(pet);
		return (NULL);
	}

	pet->name = copys(pet->name, name);
	pet->owner = copys(pet->owner, owner);
	pet->age = age;
	return (pet);
}
/**
 * length - finds the length of a string
 * @z: pointer to a string
 * Return: int
 */
int length(char *z)
{
	int i = 0;

	while (z[i] != '\0')
		i++;

	return (i);
}
/**
 * copys - copy a string to a new space in memory
 * @a: a pointer to a struct
 * @b: the string to copy
 * Return: a pointer to the new memory location
 */
char *copys(char *a, char *b)
{
	int i = 0;

	for (i = 0; b[i] != '\0'; i++)
		a[i] = b[i];
	a[i] = '\0';

	return (a);

}

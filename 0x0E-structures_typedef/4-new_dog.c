#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - stores data for a new dog
 * @name: pointer to a string of char
 * @age: float
 * @owner: pointer to a string of char
 * Return: A pointer to a new data type, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j = 0;
	dog_t *pet;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	i += j + 2;
	pet = malloc(sizeof(float) + i);
	if (pet == NULL)
		return (NULL);
	pet->name = name;
	pet->age = age;
	pet->owner = owner;
	return (pet);
}

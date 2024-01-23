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
	dog_t *pet;
	int i, j, k = 0;

	while (name[i] != '\0')
		i++;
	i++;
	while (owner[j] != '\0')
		j++;
	j++;
	pet = malloc(sizeof(dog_t));
	if (pet == NULL)
		return (NULL);
	pet->name = malloc(sizeof(char) * i);
	for (k = 0; k < i; k++)
		pet->name[k] = name[k];
	pet->name[k] = '\0';

	pet->age = age;
	pet->owner = malloc(sizeof(char) * j);
	for (k = 0; k < j; k++)
		pet->owner[k] = owner[k];
	pet->owner[k] = '\0';
	return (pet);
}

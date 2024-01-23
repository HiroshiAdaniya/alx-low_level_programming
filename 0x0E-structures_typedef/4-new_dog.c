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
	int i, j = 0;

	pet = malloc(sizeof(dog_t));
	if (pet == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	pet->name = malloc(sizeof(char) * (i + 1));
	if (pet->name == NULL)
	{
		free(pet);
		return (NULL);
	}
	pet->owner = malloc(sizeof(char) * (j + 1));
	if (pet->owner == NULL)
	{
		free(pet->name);
		free(pet);
		return (NULL);
	}

	pet->age = age;
	for (i = 0; name[i] != '\0'; i++)
		pet->name[i] = name[i];
	pet->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		pet->owner[j] = owner[j];
	pet->owner[j] = '\0';
	return (pet);
}

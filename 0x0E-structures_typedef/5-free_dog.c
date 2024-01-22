#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory located in the struct
 * @d: pointer to struct
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	free(d);
}

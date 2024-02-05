#include "lists.h"
/**
 * list_len - Determines the number of elements in a linked list
 * @h: a pointer to a linked list
 * Return: an int, else EXIT_FAILURE
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

#include "lists.h"
/**
 * listint_len - Determines the number of elements in a linked list
 * @h: a pointer to a linked list
 * Return: an int
 */
size_t listint_len(const listint_t *h)
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

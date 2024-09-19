#include "lists.h"
/**
 * dlistint_len - Finds the number of elements in a list
 * @h: Head of a list
 * Return: Number of elements in a list, else 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *start;
	size_t counter;

	if (h == NULL)
		return (0);

	start = h;
	counter = 0;

	while (start != NULL)
	{
		counter++;
		start = start->next;
	}

	return (counter);
}

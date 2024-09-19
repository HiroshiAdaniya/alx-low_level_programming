#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: Head of a list
 * Return: The number of nodes, else 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *start;
	size_t nodes;

	if (h == NULL)
		return (0);

	start = h;
	nodes = 0;

	while (start != NULL)
	{
		printf("%d\n", start->n);
		nodes++;
		start = start->next;
	}

	return (nodes);
}

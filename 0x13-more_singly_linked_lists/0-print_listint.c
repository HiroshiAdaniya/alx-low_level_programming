#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to a linked list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

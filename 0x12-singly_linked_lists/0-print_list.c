#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: a pointer to a node
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}

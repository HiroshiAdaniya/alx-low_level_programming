#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node of a linked list
 * @head: a pointer to a linked list
 * @index: the index of the nth node / unsigned int
 * Return: a pointer to the nth node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index && head != NULL)
			break;
		else if (i >= index && head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}

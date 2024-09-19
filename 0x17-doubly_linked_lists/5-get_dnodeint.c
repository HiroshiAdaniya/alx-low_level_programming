#include "lists.h"
/**
 * get_dnodeint_at_index - Finds the nth node of a linked list
 * @head: Head of a linked list
 * @index: Index of the node to locate (int)
 * Return: Nth node of linked list, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		else if (i > index)
			return (NULL);
		i++;
		head = head->next;
	}

	return (head);
}

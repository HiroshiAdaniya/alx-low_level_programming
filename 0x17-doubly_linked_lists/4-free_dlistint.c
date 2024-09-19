#include "lists.h"
/**
 * free_dlistint - Frees a linked list
 * @head: Head of a linked list
 * Return: Nothing / void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *free_node;

	if (head != NULL)
	{
		current = head;
		while (current != NULL)
		{
			free_node = current;
			current = current->next;
			free(free_node);
		}
	}
}

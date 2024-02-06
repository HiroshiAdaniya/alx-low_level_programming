#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets pointer to NULL
 * @head: a pointer to a linked list
 * Return: Nothing / void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	free(*head);
	*head = NULL;
}

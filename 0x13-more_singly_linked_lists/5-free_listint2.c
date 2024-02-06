#include "lists.h"
/**
 * free_listint2 - frees a linked list and sets pointer to NULL
 * @head; a pointer to a linked list
 * Return: Nothing / void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
}

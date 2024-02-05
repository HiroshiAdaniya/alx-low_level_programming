#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to a linked list
 * Return: nothing / void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}

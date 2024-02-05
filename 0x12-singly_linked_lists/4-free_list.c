#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to a linked list
 * Return: Nothing / Void
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
}

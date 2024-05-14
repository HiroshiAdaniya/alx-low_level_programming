#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: start of a linked list
 * Return: a pointer to the reverse linked list, else NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}

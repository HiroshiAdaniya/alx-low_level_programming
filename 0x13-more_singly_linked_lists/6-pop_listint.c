#include "lists.h"
/**
 * pop_listint - deletes the head node and returns the data
 * @head: pointer to a linked list
 * Return: Node data (an int) / else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i = 0;

	if (head == NULL || *head == NULL)
		return (0);

	i = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (i);
}

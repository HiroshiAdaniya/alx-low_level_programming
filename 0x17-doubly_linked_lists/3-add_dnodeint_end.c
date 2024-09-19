#include "lists.h"
/**
 * add_dnodeint_end - Adds a node to the end of a linked list
 * @head: The head of a linked list
 * @n: Data to add to the new node (int)
 * Return: The address of the new node, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *traverse;

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;

		traverse->next = newnode;
		newnode->prev = traverse;
	}

	return (newnode);
}

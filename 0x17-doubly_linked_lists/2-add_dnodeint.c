#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: Head of a list
 * @n: Data to add to new node
 * Return: the address of the new node, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}

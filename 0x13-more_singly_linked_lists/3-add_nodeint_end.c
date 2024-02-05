#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: a pointer to a linked list
 * @n: an int
 * Return: A pointer to a new elements, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else if (*head != NULL)
	{
		new = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = newnode;
	}
	return (newnode);
}

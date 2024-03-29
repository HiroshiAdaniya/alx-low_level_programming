#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: a pointer to a linked list
 * @n: an int
 * Return: A pointer to new element, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

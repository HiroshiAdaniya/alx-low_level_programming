#include "lists.h"
/**
 * add_node - adds a new node to the beginning of linked list
 * @head: a pointer to a linked list
 * @str: a pointer to a string
 * Return: a pointer to the new node, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

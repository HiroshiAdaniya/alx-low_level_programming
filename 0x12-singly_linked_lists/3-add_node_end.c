#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: a pointer to a linked list
 * @str: pointer to a string
 * Return: A pointer to the new node, else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *new;

	if (*head == NULL)
	{
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		new = *head;
		newnode = malloc(sizeof(list_t));
		if (newnode == NULL)
			return (NULL);
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
		while (new->next != NULL)
			new = new->next;
		new->next = newnode;
	}
	return (newnode);
}

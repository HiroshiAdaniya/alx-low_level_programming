#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts node at a given index
 * @h: Head of linked list
 * @idx: Index to insert the node (int)
 * @n: The data that needs to be added
 * Return: Address of the new node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *current = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	current = *h;

	while (current != NULL)
	{
		if (idx == 0)
		{
			newnode->next = *h;
			newnode->prev = NULL;
			(*h)->prev = newnode;
			*h = newnode;
			return (*h);
		}
		else if (i == idx)
		{
			if (tmp == NULL)
				newnode = link_nodes(newnode, current, tmp);
			else
				newnode = link_nodes(newnode, current, tmp);
			return (newnode);
		}
		if (current->next == NULL)
			tmp = current;
		current = current->next;
		i++;
	}
	free(newnode);
	return (NULL);
}
/**
 * link_nodes - links a node at a position
 * @newnode: The node to insert
 * @current: The node to insert before
 * @tmp: The second last node
 * Return: a node
 */
dlistint_t *link_nodes(dlistint_t *newnode, dlistint_t *current,
dlistint_t *tmp)
{
	newnode->next = current;
	if (tmp == NULL)
	{
		newnode->next = current;
		newnode->prev = current->prev;
		current->prev->next = newnode;
		current->prev = newnode;
	}
	else
	{
		newnode->prev = tmp;
		tmp->next = newnode;
	}
	return (newnode);
}

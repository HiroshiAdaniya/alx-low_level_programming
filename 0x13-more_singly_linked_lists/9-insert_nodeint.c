#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node at a given position
 * @head: pointer to a linked list
 * @idx: the point where the node should be inserted
 * @n: the data to be added
 * Return: a pointer to the new node, else NULL om failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	while (temp != NULL)
	{
		node->n = n;
		if (i == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			break;
		}
		else if (i >= idx && temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (node);
}

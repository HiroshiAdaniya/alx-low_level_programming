#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index point
 * @head: pointer to a linked list
 * @index: the index where the node should be deleted
 * Return: 1 on success, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tempnode;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tempnode = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
	while (i < index - 1)
	{
		if (tempnode == NULL || tempnode->next == NULL)
			return (-1);
		else if (i == index - 1)
		{
			node = tempnode->next;
			tempnode->next = node->next;
			free(node);
			break;
		}
		tempnode = tempnode->next;
		i++;
	}
	return (1);
}

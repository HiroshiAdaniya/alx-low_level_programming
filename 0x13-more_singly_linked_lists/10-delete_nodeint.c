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
	for (i = 0; i < index - 1; i++)
	{
		if (i == index - 1)
		{
			node = tempnode->next;
			tempnode->next = node->next;
			free(tempnode);
		}
		else if (tempnode->next == NULL || tempnode == NULL)
			break;
		tempnode = tempnode->next;
	}
	return (-1);
}

#include "lists.h"
/**
 * sum_listint - Determines the sum of all the data of a linked list
 * @head: a pointer to a linked list
 * Return: The sum of a linked list, else 0
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}

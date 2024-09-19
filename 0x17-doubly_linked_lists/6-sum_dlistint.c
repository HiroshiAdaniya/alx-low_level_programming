#include "lists.h"
/**
 * sum_dlistint - Finds the sum of all the data (int) in a linked list
 * @head: Head of a linked list
 * Return: Total sum of all the data, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;

	if (head == NULL)
		return (total_sum);

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}

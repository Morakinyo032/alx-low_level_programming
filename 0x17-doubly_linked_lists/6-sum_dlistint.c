#include "lists.h"

/**
 * sum_dlistint - Finds the sum of all the data in a doubly linked list
 * @head: Pointer to the first node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

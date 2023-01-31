#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the first node
 * Return: The sum of all data in a listint_
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr1;
	long int num;

	num = 0;
	ptr1 = head;
	num += ptr1->n;
	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		if (ptr1 == NULL)
			return ((int)num);
		num += ptr1->n;
	}
	return ((int)num);
}

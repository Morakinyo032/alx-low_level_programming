#include "lists.h"
/**
 * print_listint - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num;
	listint_t *ptr;

	if (h == NULL)
		return (0);
	num = 0;
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		num++;
		ptr = ptr->next;
	}
	return (num);
}

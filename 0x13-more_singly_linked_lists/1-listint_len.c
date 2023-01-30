#include "lists.h"
/**
 * listint_len - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int num;
	listint_t *ptr;

	num = 0;
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}

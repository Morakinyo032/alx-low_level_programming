#include "lists.h"
/**
 * list_len - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	int num;
	list_t *ptr;

	num = 0;
	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}

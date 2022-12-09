#include "lists.h"
/**
 * print_list - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int i, num = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}
	while (h->next != NULL)
	{
		for (i = 0; i < h->len; i++)
		{
			printf("[%lu] %s\n", h->len, h->str)
		}
		num++;
		str = h->next->str;
	}
	return (num);
}

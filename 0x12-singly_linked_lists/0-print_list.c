#include "lists.h"
/**
 * print_list - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int num;
	list_t *ptr;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	num = 0;
	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		num++;
		ptr = ptr->next;
	}
	return (num);
}

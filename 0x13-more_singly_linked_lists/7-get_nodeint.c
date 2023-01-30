#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t list
 * @head: Pointer to the first node
 * @index: Index of the node to get
 * Return: The nth node or null if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *ptr1;

	ptr1 = head;
	if (index == 0)
		return (ptr1);
	i = 0;
	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		i++;
		if (i == (int) index)
			return (ptr1);
	}
	return (NULL);
}

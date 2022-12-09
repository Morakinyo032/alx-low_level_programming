#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to first node
 * @index: Index of the node to return
 * Return: Pointer to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	n = 0;
	current = head;
	while (current != NULL)
	{
		if (n == index)
			return (current);
		n = n + 1;
		current = current->next;
	}
	return (NULL);
}

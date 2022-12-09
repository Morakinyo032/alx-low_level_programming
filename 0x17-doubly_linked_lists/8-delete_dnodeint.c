#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index position of a dlist
 * @head: Pointer to pointer to the first node
 * @index: Position of the node to be deleted
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *current1;
	dlistint_t *current2;
	unsigned int n;

	if (*head == NULL)
		return (-1);
	n = 0;
	current = *head;
	while (current != NULL)
	{
		if (n == index)
		{
			current1 = current->prev;
			current2 = current->next;
			current->next = NULL;
			current->prev = NULL;
			if (index == 0)
				*head = current2;
			else
			{
				current1->next = current2;
				current2->prev = current1;
			}
			return (1);
		}
		n = n + 1;
		current = current->next;
	}
	return (-1);
}

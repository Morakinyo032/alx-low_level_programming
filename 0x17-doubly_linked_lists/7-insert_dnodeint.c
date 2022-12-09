#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to pointer to first node
 * @idx: index of the list where the new node would be added
 * @n: data of the new node
 * Return: Pointer to the new added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *current1;
	dlistint_t *new;
	unsigned int x;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	x = 0;
	current = *h;
	while (current != NULL)
	{
		if (x == idx)
		{
			current1 = current->prev;
			new->prev = current1;
			new->next = current;
			current1->next = new;
			return (new);
		}
		x = x + 1;
		current = current->next;
	}
	return (NULL);
}

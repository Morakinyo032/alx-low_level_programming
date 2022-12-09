#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to a const dlistint_t
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	n = 0;
	current = h;
	while (current != NULL)
	{
		n = n + 1;
		current = current->next;
	}
	return (n);
}

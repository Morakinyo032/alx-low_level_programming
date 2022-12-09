#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to a const dlistint_t
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int n;

	n = 0;
	current = h;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n = n + 1;
	}
	return (n);
}

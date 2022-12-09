#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to a doubly linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tmp;

	if (head)
	{
		current = head;
		while (current != NULL)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
		free(current);
	}
}

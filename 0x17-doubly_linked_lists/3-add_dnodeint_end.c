#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the end of a dlistint_t list
 * @head: Pointer to the first node
 * @n: input int for the new dnode
 *
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			if (current->next == NULL)
				break;
			current = current->next;
		}
		new->prev = current;
		current->next = new;
		new->next = NULL;
	}
	else
		*head = new;
	return (*head);
}

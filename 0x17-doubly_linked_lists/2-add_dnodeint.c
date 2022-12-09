#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the first node
 * @n: input int for the new dnode
 *
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (*head);
}

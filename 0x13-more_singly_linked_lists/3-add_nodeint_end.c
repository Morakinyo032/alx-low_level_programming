#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list_t list
 * @head: Pointer to head pointer
 * @n: int data of listint list
 * Return: Address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr, *ptr1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			ptr1 = ptr;
		}
		ptr = ptr->next;
	}
	ptr1->next = new;
	return (new);
}

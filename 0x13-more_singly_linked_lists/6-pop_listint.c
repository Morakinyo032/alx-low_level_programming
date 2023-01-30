#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to to the head pointer
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr, *ptr1;

	if (*head == NULL)
		return (0);
	ptr = *head;
	ptr1 = ptr->next;
	ptr->next = NULL;
	*head = ptr1;
	if (ptr1 == NULL)
		return (0);
	return (ptr->n);
}

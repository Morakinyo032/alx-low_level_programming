#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Pointer to to the head pointer
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr, *ptr1;
	int num;

	if (*head == NULL)
		return (0);
	ptr = *head;
	num = ptr->n;
	ptr1 = ptr->next;
	ptr->next = NULL;
	free(ptr);
	*head = ptr1;
	return (num);
}

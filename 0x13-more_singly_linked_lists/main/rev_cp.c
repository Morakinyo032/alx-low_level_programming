#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to head pointer
 * @n: int data input
 * Return: Address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * reverse_listint - Reverses a listint list
 * @head: Pointer to the head pointer
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr1;

	ptr = *head;
	ptr1 = NULL;
	while (ptr != NULL)
	{
		add_nodeint(&ptr1, ptr->n);
		ptr = ptr->next;
	}
	free_listint2(head);
	*head = ptr1;
	return (ptr1);
}

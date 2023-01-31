#include "lists.h"
/**
 * set_pointer - Initiates array of pointers
 * @head: Pointer to head pointer of a listint list
 * @ptr: Array of pointers
 * @i: index counter
 * Return: Nothing
 */
void set_pointer(listint_t **head, listint_t *ptr[], int i)
{
	if (*head == NULL)
	{
		ptr[i] = NULL;
		*head = ptr[0];
		return;
	}
	ptr[i] = *head;
	if (*head != NULL)
		set_pointer(&((*head)->next), ptr, i + 1);
}
/**
 * reverse_listint - Reverses a listint list
 * @head: Pointer to the head pointer
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{	
	listint_t *ptr[100];
	int i;

	i = 0;
	set_pointer(head, ptr, i);
	for (i = 1; ptr[i] != NULL; i++)
	{
		(ptr[i])->next = ptr[i - 1];

	}
	*head = ptr[i - 1];
	(ptr[0])->next = NULL;
	return (*head);
}

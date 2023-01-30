#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the list head
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *ptr1;

	ptr = head;
	while (ptr != NULL)
	{
		ptr1 = ptr->next;
		free(ptr);
		ptr = ptr1;
	}
}

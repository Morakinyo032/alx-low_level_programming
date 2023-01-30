#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to the list head pointer
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr1;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr1 = ptr->next;
		free(ptr);
		ptr = ptr1;
	}
	head = NULL;
}

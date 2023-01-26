#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the list head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr, *ptr1;

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		ptr1 = ptr->next;
		free(ptr);
		ptr = ptr1;
	}
}

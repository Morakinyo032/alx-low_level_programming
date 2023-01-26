#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to head pointer
 * @str: Pointer to str needed to be copied
 * Return: Address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr, *ptr1;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
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

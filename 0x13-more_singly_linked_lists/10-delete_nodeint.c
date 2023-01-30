#include "lists.h"
/**
 * get_nodeint_at_index - Gets the nth node of a listint_t list
 * @head: Pointer to the first node
 * @index: Index of the node to get
 * Return: The nth node or null if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *ptr1;

	ptr1 = head;
	if (index == 0)
		return (ptr1);
	i = 0;
	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		i++;
		if (i == (int) index)
			return (ptr1);
	}
	return (NULL);
}

/**
 * delete_nodeint_at_index - Deletes node at a given index of a list
 * @head: Pointer to head pointer
 * @index: Index of the node to be deleted
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr1, *ptr2;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		ptr1 = ptr->next;
		ptr->next = NULL;
		free(ptr);
		*head = ptr1;
		return (1);
	}
	ptr = get_nodeint_at_index(*head, index - 1);
	if (ptr == NULL)
		return (-1);
	ptr1 = ptr->next;
	ptr2 = ptr1->next;
	ptr1->next = NULL;
	free(ptr1);
	ptr->next = ptr2;
	return (1);
}

#include "lists.h"
/**
 * listint_len - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int num;
	listint_t *ptr;

	num = 0;
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
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
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to head pointer
 * @idx: Index to insert the new node in
 * @n: Data at the new node
 * Return: Pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (listint_len(*head) <= idx)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	ptr1 = get_nodeint_at_index(*head, idx - 1);
	if (ptr1 == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = ptr1->next;
	ptr1->next = new;
	return (new);
}

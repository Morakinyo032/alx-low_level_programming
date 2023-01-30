#include "lists.h"

/**
 * printformat - Print formated listint list
 * @head: Pointer to head pointer
 * Return: Nothing
 */
int printformat(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		exit (98);
	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p] %i\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
	}
	return (0);
}
/**
 * reverse_listint - Reverses a listint list
 * @head: Pointer to the head pointer
 * Return: Pointer to the first node of the reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *ptr, *ptr1;
	int num;

	num = 0;
	ptr = (listint_t *)head;
	ptr1 = NULL;
	while (ptr != NULL)
	{
		add_nodeint(&ptr1, ptr->n);
		ptr = ptr->next;
		num++;
	}
	printformat((listint_t *)head);
	printformat(ptr1);
	free_listint2((listint_t **)head);
	free_listint2(&ptr1);
	return (num);
}

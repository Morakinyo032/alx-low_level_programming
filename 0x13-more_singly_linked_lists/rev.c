#include "lists.h"
/**
 * listint_len - Prints all elements of a list_t
 * @h:Pointer to the linked list
 * Return: Number of elements in the list
 */
listint_t *find_end_node(listint_t *h, listint_t *ptr)
{
	ptr = h;
	if (ptr->next == NULL)
		return (ptr);
	if (ptr != NULL)
		find_end_node(h->next, ptr);
}
/**
 *
 *
 *
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr1, *ptr3;

	ptr = *head;
	ptr1 = find_end_node(*head, ptr1);
	ptr3 = ptr1;
	while (ptr != NULL)
	{
		if (ptr->next != ptr1)
			ptr = ptr->next;
		else
		{
			printf("End node = %i\n", ptr1->n);
			ptr1->next = ptr;
			ptr1 = ptr;
			ptr = *head;
			if (ptr1 == *head)
			{
				printf("New End node = %i\n", ptr1->n);
				(*head)->next == NULL;
				*head = ptr3;
				return(*head);
			}
		}
	}
}
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    reverse_listint(&head);
    print_listint(head);    
    free_listint2(&head);
    return (0);
}

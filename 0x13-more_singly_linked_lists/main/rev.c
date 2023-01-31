#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

listint_t *reverse_list(listint_t *ptr1, listint_t *ptr2, listint_t *ptr3)
{
	if (ptr3 == NULL)
		return (ptr2);
	if (ptr2)
	{
		ptr2->next = ptr1;
		ptr1->next = NULL;
		reverse_list(ptr2, ptr2->next, (ptr2->next)->next);
	}
}
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr1;

	ptr = *head;
	ptr1 = ptr->next;
	reverse_list(ptr, ptr1, ptr1->next);
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

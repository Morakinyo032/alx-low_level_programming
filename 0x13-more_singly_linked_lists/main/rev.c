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
 *
 *
 *
 *
 *
 */
listint_t *reverse_listint(listint_t **head)
{	
	listint_t *ptr[listint_len(*head)];
	int i;
	
	i = 0;
	ptr[i] = *head;
	while (*head != NULL)
	{
		i++;
		ptr[i] = (*head)->next;
		ptr[i + 1] = (ptr[i])->next;
		((*head)->next)->next = *head;
		(ptr[0])->next = NULL;
		*head = ptr[i + 1];
		i++;
	}
	return (*head);
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

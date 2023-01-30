#include "lists.h"

/**
 * loop_flag - Checks for loop in a listint list
 * @ptr: Pointer to listint pointers
 * @i: Index to check for loop
 * Return: 1 if true or -1 otherwise
 */
int loop_flag(listint_t *ptr[], int i)
{
	int j;

	for (j = 0; j < i ; j++)
	{
		if (ptr[i] == ptr[j])
		{
			return (1);
		}
	}
	return (-1);
}
/**
 * print_listint_safe - Prints a listint list checking for loop
 * @head: Pointer to the head node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	size_t num;
	int i, j, flag;
	listint_t *ptr1[32];

	num = 0;
	i = 0;
	flag = -1;
	if (head == NULL)
		exit(98);
	ptr = head;
	while (ptr != NULL)
	{
		ptr1[i] = (listint_t *)ptr;
		if (loop_flag(ptr1, i) == 1)
			flag = 1;
		if (flag == -1)
			printf("[%5p] %i\n", (void *)ptr, ptr->n);
		else
		{
			printf("->[%5p] %i\n", (void *)ptr, ptr->n);
			break;
		}
		ptr = ptr->next;
		num++;
		i++;
	}
	return (num);
}

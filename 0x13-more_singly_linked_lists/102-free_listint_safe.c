#include "lists.h"
/**
 * freennode - Frees a given node of nodes of a listint list
 * @h: POinter to the head pointer
 * @n: Number of nodes to be freed
 * Return: 0 on success or 98 otherwise
 */
int freennode(listint_t **h, int n)
{
	listint_t *ptr, *ptr1;
	int i;

	if (*h == NULL || n <= 0)
		exit(98);
	i = 0;
	ptr = *h;
	while (i < n)
	{
		ptr1 = ptr->next;
		free(ptr);
		ptr = ptr1;
		i++;
	}
	return (0);
}

/**
 * is_loop - check if a list contains loop
 * @h: Pointer to head pointer
 * Return: 1 if true or -1 otherwise
 */
int is_loop(listint_t **h)
{
	listint_t *ptr2[200], *ptr;
	int i, j;

	i = 0;
	ptr = *h;
	while (ptr != NULL)
	{
		ptr2[i] = ptr;
		for (j = 0; j < i; j++)
		{
			if (ptr2[i] == ptr2[j])
				return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to the list head pointer
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr, *ptr1;
	listint_t *ptr2[200];
	size_t num;
	int i, j, flag;

	flag = 1;
	num = 0;
	i = 0;
	if (is_loop(h) == -1)
	{
		ptr = *h;
		while (ptr != NULL)
		{
			ptr1 = ptr->next;
			free(ptr);
			ptr = ptr1;
			num++;
		}
		*h = NULL;
		return (num);
	}
	ptr = *h;
	while (ptr != NULL)
	{
		ptr2[i] = ptr;
		for (j = 0; j < i; j++)
		{
			if (ptr2[j] == ptr)
			{
				freennode(h, i);
				*h = NULL;
				flag = 0;
				break;
			}
		}
		if (flag == 0)
			break;
		i++;
		num++;
		ptr = ptr->next;
	}
	return (num - 1);
}

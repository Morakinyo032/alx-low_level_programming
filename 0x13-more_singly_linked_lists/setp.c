#include "lists.h"
/**
 * set_pointer - Initiates array of pointers
 * @head: Pointer to head pointer of a listint list
 * @ptr: Array of pointers
 * @i: index counter
 * Return: Nothing
 */
void set_pointer(listint_t **head, listint_t *ptr[], int i)
{
	if (*head == NULL)
	{
		ptr[i] = NULL;
		*head = ptr[0];
		return;
	}
	ptr[i] = *head;
	if ((*head)->next != NULL)
		set_pointer(&((*head)->next), ptr, i++);
}
int main

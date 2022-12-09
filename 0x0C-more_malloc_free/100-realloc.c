#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated space
 * @old_size: Size of initial space
 * @new-size: New size to be reallocated
 * Return: POinter to the new reallocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = realloc(ptr, new_size);
	if (p == NULL)
		return (NULL);	
	for (i = 0; i < old_size; i++)
		p[i] = ptr[i];
	return (p);
}

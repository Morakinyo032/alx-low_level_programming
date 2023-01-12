#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated space
 * @old_size: Size of initial space
 * @new_size: New size to be reallocated
 * Return: POinter to the new reallocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	old_size = 0;
	return (realloc(ptr, new_size + old_size));
}

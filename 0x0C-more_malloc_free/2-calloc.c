#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: Size of each element in the array
 * Return: Pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	return (calloc(nmemb, size));
}

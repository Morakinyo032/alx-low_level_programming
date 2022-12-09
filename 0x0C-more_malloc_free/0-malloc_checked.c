#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of space to be allocated
 * Return: pointer to the allocated space
 */
void *malloc_checked(unsigned int b)
{
	void *s;
       
	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

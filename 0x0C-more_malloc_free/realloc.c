#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated space
 * @old_size: Size of initial space
 * @new-size: New size to be reallocated
 * Return: POinter to the new reallocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int len;
	void *s;

	if (ptr == NULL)
	{
		if (new_size != 0)
			return (malloc(new_size));
		return (NULL);
	}
	else
	{
		if (new_size == 0)
			free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size < new_size)
		len = old_size;
	else
		len = new_size;
	memcpy(s, ptr, (size_t) len);
	free(ptr);
	return (s);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}

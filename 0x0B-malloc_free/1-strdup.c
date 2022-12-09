#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to the newly allocated space in the memory
 * @str: Pointer to argv
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *t;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	t = malloc(size + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = str[i];
	return (t);
}

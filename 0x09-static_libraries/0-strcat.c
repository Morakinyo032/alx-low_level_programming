#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string tobe added to
 * @src: string to be added
 *
 * Return: returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: first input
 * @src: second input
 * @n: integer input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}

#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates a string with n bytes from another string
 * @dest: fisrt string
 * @src: second string
 * @n: number of bytes to be added to the first string
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}

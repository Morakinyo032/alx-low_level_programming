#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string from one variable to the other
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

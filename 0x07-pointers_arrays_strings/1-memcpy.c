#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area of n bytes from one pointer to ther other
 * @src: Address to copy from
 * @dest: Address to copy to
 * @n: Number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

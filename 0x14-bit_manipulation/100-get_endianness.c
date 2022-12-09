#include "main.h"
/**
 * get_endianness - Checks for endianness
 * Return: 1, if architecture is little, 0 in case of big endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int) *c);
}

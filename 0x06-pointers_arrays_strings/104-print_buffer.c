#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_buffer - prints buffer
 * @b: input string
 * @size: size of the string
 */
void print_buffer(char *b, int size)
{
	fwrite(b, size, 1, stdout);
}

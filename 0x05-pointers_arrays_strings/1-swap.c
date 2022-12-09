#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

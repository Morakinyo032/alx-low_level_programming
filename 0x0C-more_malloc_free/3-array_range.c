#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: first int of the array
 * @max: last int of the array
 * Return: Pointer to the array created
 */
int *array_range(int min, int max)
{
	int i;

	if (min > max)
		return (NULL);
	int *s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		s[i] = min + i;
	return (s);
}

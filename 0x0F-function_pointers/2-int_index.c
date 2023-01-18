#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Pointer to the given array
 * @size: Number of element in the array
 * @cmp: Funtion pointer
 *
 * Return: Integer being looked for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

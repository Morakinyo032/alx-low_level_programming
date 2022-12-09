#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints the length of a string
 * @s: Pointer to the string
 * Return: returns the integer length of the string
 */
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s > '\0')
	{
		t += 1 + _strlen_recursion(s + 1);
	}
	return (t);
}

#include "main.h"
#include <string.h>
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Input string
 * @accept: Input string
 * Return: the number of bytes  in the initial segment of s
 */ 
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

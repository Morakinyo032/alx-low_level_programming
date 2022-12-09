#include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: Pointer to the name
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

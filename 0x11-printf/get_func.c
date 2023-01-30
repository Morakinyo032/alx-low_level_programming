#include "main.h"

/**
 * get_func - Gets a function to operate on
 *
 *
 *
 */
int (*get_func(char chr))(const char *s)
{
	int i;
	struct func_t
	{
		char c;
		int (*f)(const char *str);
	};
	typedef struct func_t func_t;

	func_t func_list[] = {
		{'s', print_string},
		{'c', print_char},
		{'i', print_string},
		{'d', print_string},
		{'p', print_string},
		{'o', print_string},
		{'x', print_string},
		{'X', print_string},
		{'u', print_string},
		{'b', print_string},
		{'\0', NULL}
	};

	for (i = 0; func_list[i].c != '\0'; i++)
	{
		if (chr == (func_list[i].c))
		{
			return (func_list[i].f);
		}
	}
	return (NULL);
}

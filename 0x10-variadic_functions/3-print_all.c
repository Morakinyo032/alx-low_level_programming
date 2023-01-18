#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_sep - insert separator between arguments
 * @s: Pointer to the string
 * @idx: index of where to insert separator
 * Return: Nothing
 */
void print_sep(const char * const s, int idx)
{
	switch (s[idx + 1])
	{
		case '\0':
			break;
		default:
			printf(", ");
			break;
	}
}

/**
 * print_all - Prints anything
 * @format: List of all types of arg passed
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *tmp;

	i = 0;
	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					print_sep(format, i);
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					print_sep(format, i);
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					print_sep(format, i);
					break;
				case 's':
					tmp = va_arg(args, char *);
					if (tmp == NULL)
					{
						printf("(nil)");
						print_sep(format, i);
						break;
					}
					printf("%s", tmp);
					print_sep(format, i);
					break;
				default:
					break;
			}
			i++;
		}
	}
	va_end(args);
	printf("\n");
}

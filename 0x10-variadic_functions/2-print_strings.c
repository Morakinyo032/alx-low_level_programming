#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @n: Number of undefined args
 * @separator: Pointer to string to be printed between strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsugned int n, ...)
{
	va_list args;

	va_start(args, n);
	int i;

	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
			printf("(nil)");
		printf("%s", va_arg(args, char *));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}

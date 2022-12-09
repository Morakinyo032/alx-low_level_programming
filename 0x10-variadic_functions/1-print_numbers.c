#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @n: Number of undefined args
 * @separator: Pointer to string to be printed between numbers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsugned int n, ...)
{
	va_list args;

	va_start(args, n);
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}

#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @n: Number of undefined args
 * @separator: Pointer to string to be printed between strings
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list args;
	int i;

	va_start(args, n);
	for (i = 0; i < (int) n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (int)n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}

#include <stdio.h>

/**
 * main -causes an infinite loop
 * Retuen: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming : (\n");

	i = 0;

	while (i < 10) //i is not incremented within the loop
	{
		putchar(i);
	}

	printf("Infinitenloop avoided! \\o/\n");

	return (0);
}

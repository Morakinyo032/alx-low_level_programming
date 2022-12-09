#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the product of two numbers
 * @argc: size of array of *argv
 * @argv: Pointer to array of string
 * Return: 1 if argc is not equal to 3, else 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc == 3)
	{
		a = atoi(argv[2]);
		b = atoi(argv[1]);
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (1);
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Prints the addition of numbers
 * @argc: size of array of *argv
 * @argv: Pointer to array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int s = 0;
	int n;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		s += n;
	}
	printf("%d\n", s);
	return (s);
}

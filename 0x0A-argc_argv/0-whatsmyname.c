#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: size of array of *argv
 * @argv: Pointer to array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

#include <stdio.h>
/**
 * main - Prints the number of arguments passed into the program
 * @argc: size of array of argv
 * @argv: Pointer to array of string
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}

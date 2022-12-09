#include <stdio.h>


/**
 * main - prints size of various types on the computer
 *
 * Return: return 0
 */
int main(void)
{
int cz = sizeof(char);
int iz = sizeof(int);
int liz = sizeof(long int);
int lliz = sizeof(long long int);
int fz = sizeof(float);

	printf("Size of a char: %i byte(s)\n", cz);
	printf("Size of an int: %i byte(s)\n", iz);
	printf("Size of a long int: %i byte(s)\n", liz);
	printf("Size of a long long int: %i byte(s)\n", lliz);
	printf("Size of a float: %i byte(s)\n", fz);

	return (0);
}

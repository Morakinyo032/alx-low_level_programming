#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make chage for an amount
 * @argv: parameters
 * @argc: parameter's count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, h, j, g, k, s;
	int f;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	f = (n / 25);
	h = ((n % 25) / 10);
	j = (((n % 25) % 10) / 5);
	g = ((((n % 25) % 10) % 5) / 2);
	k = ((((n % 25) % 10) % 5) % 2);
	s = f + h + j + g + k;
	printf("%i\n", s);
	return (0);

}

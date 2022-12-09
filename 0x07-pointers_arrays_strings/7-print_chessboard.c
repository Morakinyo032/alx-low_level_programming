#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @s: input string
 * 
 */
void print_chessboard(char (*s)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(s[i][j]);
		}
	_putchar('\n');
	}
}

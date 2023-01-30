#include <stdio.h>
int print(int n)
{
	if (n < 0)
	{
		n *= -1;
		putchar('-');
	}
	if (n == 0)
		return n;
	if (n)
		print(n / 10);
	putchar(n % 10 + '0');
}
int main(void)
{
	print(-23423345);
	return 0;
}

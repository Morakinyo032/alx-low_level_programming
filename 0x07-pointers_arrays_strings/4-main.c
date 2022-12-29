#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "aaa";
    char *t;

    t = _strpbrk(s, f);
	if (t == NULL)
		printf("Void\n");
	else
	    printf("%s\n", t);
    return (0);
}

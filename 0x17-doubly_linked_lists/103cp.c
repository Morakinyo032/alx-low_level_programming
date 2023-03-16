#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *int_to_str(unsigned long int n)
{
	unsigned long int tmp;
	int len, i;
	char *str;

	len = 0;
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		len += 1;
	}
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	str[i] = '\0';
	return (str);
}

int main(int argc, char **argv)
{
    int len, i;
	unsigned long int hash_num;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (-1);
	}
	len = strlen(argv[1]);
	hash_num = 0;
	for (i = 0; i < len; i++)
	{
		hash_num += ((33 + (argv[1][i] - '\0')) << i) * 93;
	}
	printf("has = %li and pin = %s\n", hash_num, int_to_str(hash_num));
	return (0);
}

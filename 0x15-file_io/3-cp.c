#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string input
 * Return: length of the string
 */
size_t _strlen(char *s)
{
	int i;
	size_t l;

	l = 0;
	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		l += 1;
	}
	return (l);
}
/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: PPointer to argument vectors
 * Return: 0
 */
int main(int argc, char **argv)
{
	char buf[1024];
	int fd, close_ret;
	ssize_t count;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	count = read(fd, buf, 1024);
	if (fd == -1 || count == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	close_ret = close(fd);
	if (close_ret == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	count = write(fd, buf, _strlen(buf));
	if (fd == -1 || count == -1)
	{
		dprintf(2, "Error: Can't write from %s\n", argv[2]);
		exit(99);
	}
	close_ret = close(fd);
	if (close_ret == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (0);
}

#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the the POSIX stdo
 * @filename: Pointer to the name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	char *buf;
	ssize_t count;

	buf = malloc(letters);
	if (buf == NULL)
		exit(0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	count = read(fd, buf, letters);
	if (count == -1)
		return (0);
	close(fd);
	for (i = 0; i < count; i++)
		_putchar(buf[i]);
	free(buf);
	return (count);
}

#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string input
 * Return: length of the string
 *
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
 * create_file - Creates a file
 * @filename: Pointer to the name of file to be created
 * @text_content: Pointer to the string contained in the file
 * Return: 1 on success or -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = _strlen(text_content);
	count = write(fd, text_content, len);
	if (count == -1)
		return (-1);
	close(fd);
	return (1);
}

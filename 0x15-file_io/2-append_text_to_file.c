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
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to the name of the file
 * @text_content: Pointer to the string added to the end of the file
 *
 * Return: 1 on success, or -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;
	size_t len;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	count = write(fd, text_content, len);
	if(count == -1)
		return (-1);
	close(fd);
	return (1);
}

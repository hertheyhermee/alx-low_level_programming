#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 * -1, if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, n = 0;

	if (filename == NULL)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = _string_len(text_content);
		n = write(fd, text_content, len);
	}
	if (n == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _string_len - a function that gets the length of a string
 * @s: string
 * Return: string length
 */

int _string_len(const char *s)
{
	int len;

	while (*(s + len))
		++len;
	return (len);
}

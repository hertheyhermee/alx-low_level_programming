#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_context: NULL terminated string
 * Return: 1 on success, -1 on failure
 * -1, if filename is NULL
 */
int _string_len(const char *s)
{
	return (strlen(s));
}

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _string_len(text_content);
		n = write(fd, text_content, len);
		if (n == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

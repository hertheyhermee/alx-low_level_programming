#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string 
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int write_length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _string_len(text_content);
		write_length = write(fd, text_content, len);
	}
	if (write_length == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _string_len - get the length of a string
 * @s: string
 * Return: length of string
 */
int _string_len(char *s)
{
	int lengths;

	lengths = 0;
	while (*(s + lengths))
		++lengths;
	return (lengths);
}

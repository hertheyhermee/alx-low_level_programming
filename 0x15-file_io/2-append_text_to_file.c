#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int write_length;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = _string_len(text_content);
		write_length = write(fd, text_content, length);
	}
	if (write_length == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _string_len - gets the length of a string
 * @s: string
 * Return: length of string
 */
int _string_len(char *s)
{
	int length;

	length = 0;
	while (*(s + length))
		++length;
	return (length);
}

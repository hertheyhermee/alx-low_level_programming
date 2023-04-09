#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the standard output
 * @filename: name of file
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 * 0 if the file can't be opened, 0 if filename is NULL and
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_len, write_len;
	int fd;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(cha)*(letters));
	if (buffer == NULL)
		return (0);
	read_len = read(fd, buffer, letters);
	if (read_len == -1)
		return (0);
	write_len = write(STDOUT_FILENO, buffer, read_len);
	free(buffer);
	close(fd);
	if (read_len != write_len)
		return (0);
	return (write_len);
}

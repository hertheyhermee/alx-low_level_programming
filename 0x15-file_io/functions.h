#include "main.h"

/**
 * print_usage_error - Print an error message indicating incorrect usage of
 * the program
 */
void print_usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * open_file_for_reading - Open the specified file for reading
 * @filename: Name of the file to open
 *
 * Return: The file descriptor of the opened file
 */
int open_file_for_reading(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_for_writing - Open the specified file for writing
 * @filename: Name of the file to open
 *
 * Return: The file descriptor of the opened file
 */
int open_file_for_writing(char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}

/**
 * copy_file_contents - Copy the contents of one file to another
 * @fd_from: File descriptor of the file to copy from
 * @fd_to: File descriptor of the file to copy to
 */
void copy_file_contents(int fd_from, int fd_to)
{
	ssize_t read_len, write_len;
	char buffer[1024];

	while ((read_len = read(fd_from, buffer, 1024)) != 0)
	{
		if (read_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file\n");
			exit(98);
		}

		write_len = write(fd_to, buffer, read_len);

		if (write_len != read_len || write_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
}

/**
 * close_file - Close the specified file descriptor
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

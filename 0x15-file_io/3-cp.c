#include "main.h"
#define BUFSIZE 1024

/**
 * main - a program that copies the content of a file to another file
 * @argc: Argument c
 * @argv: argument v
 * Return: 0 (success) else, exit
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int close_in, close_out;
	ssize_t reader, writer;
	char buffer[BUFSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		reader = read(file_from, buffer, BUFSIZE);
		if (reader == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);

		writer = write(file_to, buffer, reader);
		if (writer == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (reader > 0);

	close_in = close(file_from);
	if (close_in == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	close_out = close(file_to);
	if (close_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}

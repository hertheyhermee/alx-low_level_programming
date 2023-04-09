include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 on success
 *
 */
int main(int argc, char *argv[])
{
	int going_to;
	int coming_from;
	ssize_t read_length;
	ssize_t write_length;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp coming_from going_to\n");
		exit(97);
	}
	coming_from = open(argv[1], O_RDONLY);
	if (coming_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	going_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	while ((read_length = read(coming_from, buffer, 1024)) != 0)
	{
		if (going_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (read_length == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_length = write(going_to, buffer, read_length);
		if (write_length != read_length || write_length == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(coming_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", coming_from);
		exit(100);
	}
	if (close(going_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", going_to);
		exit(100);
	}
	return (0);
}

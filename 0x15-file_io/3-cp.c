#include "main.h"
#include "funtions.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from;

	if (argc != 3)
	{
		print_usage_error();
		exit(97);
	}

	file_from = open_file_for_reading(argv[1]);
	file_to = open_file_for_writing(argv[2]);

	copy_file_contents(file_from, file_to);

	close_file(file_from);
	close_file(file_to);

	return (0);
}

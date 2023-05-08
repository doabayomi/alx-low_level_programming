#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

#define BUFSIZE 1024

/**
 * print_read_error - prints read error.
 * @file_from: File being printed
 */
void print_read_error(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * print_write_error - prints write error
 * @file_to: File being printed to
 */
void print_write_error(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
	exit(99);
}

/**
 * print_close_error - prints close error
 * @file_desc: File descriptor of file not closed.
 */
void print_close_error(int file_desc)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
	exit(100);
}

/**
 * print_input_error - prints input error
 */
void print_input_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * main - copies one file to another
 * @argc: Number of arguments including the command name
 * @argv: Array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int status, bytes_written, bytes_read, file_to_desc, file_from_desc;
	char *buf = malloc((BUFSIZE * sizeof(char)) + 1);

	if (argc != 3)
		print_input_error();

	file_from = argv[1];
	file_to = argv[2];
	file_from_desc = open(file_from, O_RDONLY);
	if (file_from_desc == -1)
		print_read_error(file_from);

	file_to_desc = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_desc == -1)
		print_write_error(file_to);

	bytes_read = read(file_from_desc, buf, BUFSIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(file_to_desc, buf, bytes_read);
		if (bytes_written != bytes_read)
			print_write_error(file_to);
		bytes_read = read(file_from_desc, buf, BUFSIZE);
	}
	if (bytes_read == -1)
		print_read_error(file_from);

	status = close(file_from_desc);
	if (status == -1)
		print_close_error(file_from_desc);
	status = close(file_to_desc);
	if (status == -1)
		print_close_error(file_to_desc);
	free(buf);
	return (0);
}


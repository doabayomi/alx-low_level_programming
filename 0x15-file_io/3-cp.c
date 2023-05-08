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
 * close_file_desc - closes file descriptor
 * @file_desc: File descriptor of file to be closed.
 */
void close_file_desc(int file_desc)
{
	int status;

	status = close(file_desc);
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
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
	char *file_from, *file_to, *buf;
		int bytes_written, bytes_read, file_to_desc, file_from_desc;

	if (argc != 3)
		print_input_error();

	file_from = argv[1];
	file_to = argv[2];
	buf = malloc((BUFSIZE * sizeof(char)) + 1);
	if (buf == NULL)
		print_write_error(file_to);

	file_from_desc = open(file_from, O_RDONLY);
	if (file_from_desc == -1)
		print_read_error(file_from);

	file_to_desc = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_desc == -1)
		print_write_error(file_to);

	while ((bytes_read = read(file_from_desc, buf, BUFSIZE)) > 0)
	{
		bytes_written = write(file_to_desc, buf, bytes_read);
		if (bytes_written == -1)
			print_write_error(file_to);
	}
	if (bytes_read == -1)
		print_read_error(file_from);

	close_file_desc(file_from_desc);
	close_file_desc(file_to_desc);
	free(buf);
	return (0);
}


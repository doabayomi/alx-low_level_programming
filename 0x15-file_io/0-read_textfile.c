#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

/**
 * read_textfile - reads a certain number of chars from a file and prints it.
 * @filename: Path to the file to read
 * @letters: Number of chars to read.
 *
 * Return: Number of chars written to the standard output.
 * 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc, bytes_read, bytes_written, status;
	char *buf = malloc((letters * sizeof(char)) + 1);

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	bytes_read = read(file_desc, buf, letters);
	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
		return (0);

	if (bytes_read != bytes_written)
		return (0);

	status = close(file_desc);
	if (status == -1)
		return (0);

	free(buf);
	return (bytes_written);
}

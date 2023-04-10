#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a file and prints its content to standard output
 * @filename: Filename to print from.
 * @letters: Number of letters to be printed
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t print = 0, rd = 0;
	int fd = 0;
	char *buf = malloc(letters);

	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	print = write(STDOUT_FILENO, buf, rd);
	if (print == -1 || print != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (print);
}

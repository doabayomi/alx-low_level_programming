#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

/**
 * create_file - creates a file and writes some content into it.
 * @filename: Path to file to be created
 * @text_content: Text to put into the newly created file.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, status;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
	{
		status = close(file_desc);
		if (status == -1)
			return (-1);
		return (1);
	}

	bytes_written = write(file_desc, text_content, strlen(text_content));
	if (bytes_written == -1)
		return (-1);

	status = close(file_desc);
	if (status == -1)
		return (-1);
	return (1);
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>

/**
 * append_text_to_file - adds text to an already existing file.
 * @filename: Path to file that wil be appended to
 * @text_content: Text to be added to file.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, status, bytes_written;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}

	status = close(file_desc);
	if (status == -1)
		return (-1);
	return (1);
}

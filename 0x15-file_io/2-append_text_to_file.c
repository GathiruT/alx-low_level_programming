#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to append to end of file
 *
 * Return: Returns: 1 on success, -1 on failure
 * -1 if filename is NULL
 * 1 if the file exists
 * -1 if the file does not exist or if you don't have
 * the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, checkwr, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != 0)
			len++;

		checkwr = write(fd, text_content, len);

		if (checkwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: Returns: 1 on success, -1 on failure
 * -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, checkwr, l = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[l] != 0)
			l++;
		checkwr = write(fd, text_content, l);

		if (checkwr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

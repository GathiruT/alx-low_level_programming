#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 *
 * Return: the actual number of letters it could read and print
 * 0 if file cannot be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, checkrd, checkwr;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(letters + 1);

	if (c == 0)
		return (0);

	fd  = open(filename, O_RDONLY);

	if (fd == -1)
		return (free(c), 0);

	checkrd = read(fd, c, letters);

	if (checkrd == -1)
		return (free(c), 0);

	c[letters] = '\0';

	checkwr = write(STDOUT_FILENO, c, checkrd);
	if (checkwr == -1)
		return (free(c), 0);

	free(c);
	close(fd);
	return (checkwr);
}

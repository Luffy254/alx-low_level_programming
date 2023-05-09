#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of file read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print
 * or 0 if an error occurred
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_rd, bytes_wt;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	bytes_rd = read(fd, buff, letters);
	bytes_wt = write(STDOUT_FILENO, buff, bytes_rd);

	free(buff);
	close(fd);

	return (bytes_wt);
}

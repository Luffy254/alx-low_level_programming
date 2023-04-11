#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - unction that reads a text file and prints it
 * to the standard output
 * @filename: name of the file read
 * @letters: number of letters read and printed
 *
 * Return: actual number of letters read and printed or 0 if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t cont_read, cont_written;
	int rd;
	char *buf;

	if (filename == NULL)
		return (0);

	rd = open(filename, O_RDONLY);
	if (rd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	cont_read = read(rd, buf, letters);
	if (cont_read == -1)
	{
		free(buf);
		return (0);
	}

	cont_written = write(STDOUT_FILENO, buf, cont_read);
	if (cont_written == -1 || cont_written != cont_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(rd);

	return (cont_written);
}



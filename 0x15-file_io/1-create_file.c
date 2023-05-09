#include "main.h"
#include <unistd.h>

/**
 * create_file- function that creates a file
 * @filename: pointer to name of file created
 * @text_content: pointer to a string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_wt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[bytes_wt] != '\0')
			bytes_wt++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write(fd, text_content, bytes_wt) != bytes_wt)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

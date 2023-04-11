#include "main.h"
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file created
 * @text_content: NULL terminated string written to file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int rd, x, length;

	if (filename == NULL)
		return (-1);

	rd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (rd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			;
		x = write(rd, text_content, length);

		if (x == -1 || x != length)
		{
			close(rd);
			return (-1);
		}
	}
	close(rd);
	return (1);
}

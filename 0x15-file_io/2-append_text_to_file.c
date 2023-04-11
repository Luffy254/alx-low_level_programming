#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to name of file
 * @text_content: pointer to text appended to the file
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rd, length, w_cont;

	if (filename == NULL)
		return (-1);

	rd = open(filename, O_WRONLY | O_APPEND);
	if (rd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			;

		w_cont = write(rd, text_content, length);
		if (w_cont == -1)
		{
			close(rd);
			return (-1);
		}
	}
	close(rd);
	return (1);
}

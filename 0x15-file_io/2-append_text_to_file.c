#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * Owned By MoOka
 * @filename: filename
 * @text_content: content
 * Return: 1 if true, -1 if false
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dd;
	ssize_t wr;
	int n;

	if (filename == NULL)
	{
		return (-1);
	}

	dd = open(filename, O_WRONLY | O_APPEND);
	if (dd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			;
		wr = write(dd, text_content, n);
		if (wr == -1 || wr != n)
		{
			close(dd);
			return (-1);
		}
	}
	close(dd);
	return (1);
}

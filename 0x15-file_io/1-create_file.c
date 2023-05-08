#include "main.h"

/**
 * create_file - function that creates a file
 * Owned By MoOka
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 if true, -1 if false
 */

int create_file(const char *filename, char *text_content)
{
	int dd;
	int n;
	ssize_t writ;

	if (filename == NULL)
	{
		return (-1);
	}

	dd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (dd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			;
		writ = write(dd, text_content, n);
		if (writ == -1 || writ != n)
		{
			close(dd);
			return (-1);
		}
	}
	close(dd);
	return (1);
}

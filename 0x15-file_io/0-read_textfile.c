#include "main.h"

/**
 * read_textfile - function that reads a file
 * & prints it to the POSIX standard output.
 * Owned By Mooka
 * @filename: file name to read
 * @letters: numbers that should be prints and read
 * Return: number of letters thatt could be read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int dd;
	/* ssize_t can represent both positive and negative values */
	ssize_t rea, writ;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	dd = open(filename, O_RDONLY);
	if (dd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(dd);
		return (0);
	}
	rea = read(dd, buff, letters);
	if (rea == -1)
	{
		free(buff);
		close(dd);
		return (0);
	}

	writ = write(STDOUT_FILENO, buff, rea);
	if (writ == -1 || writ != rea)
	{
		free(buff);
		close(dd);
		return (0);
	}
	free(buff);
	close(dd);
	return (writ);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of file to read
 * @letters: number of letter to read and write
 *
 * Return: number of bytes to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t Write;
	ssize_t Read;
	char *temp;

	if (filename == NULL)
	{
		return (0);

	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	temp = malloc(letters + 1);

	if (temp == NULL)
	{
		close(fd);
		return (-1);
	}

	Read = read(fd, temp, letters);
	Write = write(STDOUT_FILENO, temp, Read);

	free(temp);
	close(fd);
	return (Write);
}

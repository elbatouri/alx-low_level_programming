#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the created file
 * @text_content: the content of the file
 *
 * Return: 1 if suscces -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	size_t length;
	ssize_t Written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	length = strlen(text_content);
	Written = write(fd, text_content, length);

	close(fd);

	if (Written == -1 || (size_t)Written != length)
	{
		exit(-1);
	}
	return (1);
}

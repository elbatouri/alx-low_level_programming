#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the created file
 * @text_content: the content to put in the file
 *
 * Return: 1 if succes -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int Written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)

	{
	for (length = 0; text_content[length];)
		length++;
	}

	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	Written = write(fd, text_content, length);

	if (fd < 0)
	{
		return (-1);
	}

	if (Written != length)
	{
	close(fd);
	return (fd);
	}
	close(fd);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the contentto add to the end
 *
 * Return: 1 sucsuss -1 fail;
 */

int append_text_to_file(const char *filename, char *text_content)
	{
		int length;
		int Write;
		int Open;

		if (filename == NULL)
			return (-1);

		if (text_content == NULL)
			return (-1);

		for (length = 0; text_content[length];)
			length++;

		Open = open(filename, O_WRONLY | O_APPEND);
		Write = write(Open, text_content, length);

		if (Open < 0 || Write < 0)
			return (-1);

		close(Open);
		return (1);
	}

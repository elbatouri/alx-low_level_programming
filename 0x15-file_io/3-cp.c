#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * buffercreator - Allocates 1024 bytes for a buffer.
 * @File: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *buffercreator(char *File)
{
	char *prompt;

	prompt = malloc(sizeof(char) * 1024);

	if (prompt == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", File);
		exit(99);
	}

	return (prompt);
}

/**
 * closingfile - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void closingfile(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of the file in an other file.
 * @argc: The number of arguments gived.
 * @argv: An array that points to the arguments.
 *
 * Return: 0 ( success ).
 *
 * Description: If the argument count is incorrect - exit with the code 97.
 * If file_from does not exist or cannot be read - exit with the code 98.
 * If file_to cannot be created or written to - exit with the code 99.
 * If file_to or file_from cannot be closed - exit with the code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, g, x;
	char *prompt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	prompt = buffercreator(argv[2]);
	from = open(argv[1], O_RDONLY);
	g = read(from, prompt, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || g == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(prompt);
			exit(98);
		}

		x = write(to, prompt, g);
		if (to == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(prompt);
			exit(99);
		}

		g = read(from, prompt, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (g > 0);

	free(prompt);
	closingfile(from);
	closingfile(to);

	return (0);
}

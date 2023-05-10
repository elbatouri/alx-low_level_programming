#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_buffer - create a buffer for optimize memory
 * @file: the buffer name
 *
 * Return: pointer to the allocated buffer
 */

char *create_buffer(char *file)
{
	char *temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO, "ERROR: can't write to %s\n", file);
		exit(99);
	}
	return (temp);
}

/**
 * close_file - close the file descriptors
 * @fd : file desciptor
 */

void close_file(int fd)
{
int Cls = close(fd);

	if (Cls == -1)
	{
	dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - copies from a file to other file
 * @argc: number of arguments
 * @argv: the value of the arguments
 *
 * Return: 0 if succes
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to %s\n");
		exit(97);
	}

	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	int Read = read(fd_from, temp, 1024);
	int Write = write(fd_to, temp, Read);

	do {
	if (file_from == -1 || Read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(temp);
		exit(98);
	if (file_to == -1 || Write == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(temp);
		exit(99);
	Read = read(fd_from, temp, 1024);
	fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (Read > 0);

	free(temp);
	close_file(file_from);
	close_file(file_to);

	return (0);

#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments.
 * @argv: the array of arguments.
 * @argc: the number of arguments.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore the argv*/
	printf("%d\n", argc - 1);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 ** _memcpy - copies memory area
 *@a: the copy  destination
 *@b: the copy source
 *@n: number of bytes
 *
 * Return: a pointer to @a
 */
char *_memcpy(char *a, char *b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		a[i] = b[i];
		i++;
	}

	return (a);
}

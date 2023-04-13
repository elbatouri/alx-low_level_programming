#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 *@b: the int to allocate a memory to.
 *
 *
 *
 * Return: pointer to the alocated memory and if fail return 98.
 */

	void *malloc_checked(unsigned int b)
	{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
	}

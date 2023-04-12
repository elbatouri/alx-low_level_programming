#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,;
 * @size: the number char in the array ;
 * @c: the character to put in the array
 *
 * Return: the array created.
 */

	char *create_array(unsigned int size, char c)
	{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
	}

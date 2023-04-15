#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fils the memory with a constant
 * @s: memory to be filled
 * @b: the character to coppy.
 * @n: the bytes to copy
 * Return: pointer to the memory filled
 */

	char *_memset(char *s, char b, unsigned int n)
	{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
	}

/**
 * _calloc - allocates memory for an array
 *@nmemb: the array elements
 *@size: the size of the ellements
 *Return: the pointer to the memory allocated.
 */

	void *_calloc(unsigned int nmemb, unsigned int size)
	{

		void *pm;

		if (size == 0 || nmemb == 0)
			return (NULL);
		pm = malloc(sizeof(int) * nmemb);

		if (pm == 0)
			return (NULL);
		_memset(pm, 0, sizeof(int) * nmemb);

		return (pm);
}

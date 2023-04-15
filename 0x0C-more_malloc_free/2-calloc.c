#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fils the memory with a constant
 * @s: pointer to constant
 * @b: the constant
 * @n: max bytes to use
 * Return: the memory filled
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
 *@nmemb: the length of the array
 *@size: the size of the ellements
 *Return: the pointer
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

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *@min: minimum
 *@max: maximum
 *
 *Return: point to the array created
 */

	int *array_range(int min, int max)
	{
		int *p;
		int i, size;

		if (min > max)
			return (NULL);
		size = max - min + 1;

		p = malloc(sizeof(int) * size);

		if (p == NULL)
			return (NULL);

		for (i = 0; min <= max; i++)
		p[i] = min++;

		return (p);
	}


#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of intergers
 * @size: size of array
 * @cmp: pointer to compare function
 *
 * Return: if nothing matches || size <= 0 (-1),
 * else - i of the element where cmp don't return 0
 */

	int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;

		if (array == NULL || cmp == NULL)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

		return (-1);
	}

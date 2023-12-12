#include "search_algos.h"

/**
 * linear_search - linears earches for a value in an array
 * @array: the numbers set
 * @size: siet of the array
 * @value: searched value
 * Return: return the matched index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%d] = [%d]\n", (int) i, (int) array[i])
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

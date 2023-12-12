#include "search_algos.h"

/**
 * print_array - print array
 * @array: the array to print
 * @left: the left side of array
 * @right: right side of array
 * Return: size of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	for (left = left; left < right; left++)
		printf("%d, ", array[left]);
	printf("%d\n", array[left]);
}

/**
 * binary_search - binary searches for a value in a sorted array
 * @array: numbers set
 * @size: size of the array
 * @value: value to search
 * Return: return the matched index i f err -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

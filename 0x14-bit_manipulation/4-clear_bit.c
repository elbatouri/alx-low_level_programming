#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear a bit in a given index
 * @n: the number
 * @index: the index to the bit to clear.
 * Return: 1 if success -1 if it fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

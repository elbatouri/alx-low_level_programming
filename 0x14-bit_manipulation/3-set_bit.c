#include <stdio.h>
#include "main.h"

/**
 * set_bit - set a given bit by index to 1
 * @n: the number
 * @index: the index to the bit  set to 1
 * Return: 1 if worked and -1 if it fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}

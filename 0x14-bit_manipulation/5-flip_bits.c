#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need/
 * to flip to get from one number to another
 * @n: the number 1
 * @m: the number 2
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int valOfXor = n ^ m;
	unsigned int numBits = 0;

	while (valOfXor != 0)
	{
		if ((valOfXor & 1) == 1)
		{
			numBits++;
		}

		valOfXor >>= 1;
	}

	return (numBits);

}

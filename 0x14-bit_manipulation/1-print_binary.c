#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary equivalent of entred num
 * @n: the number to enter
 *
 * Return : tha binary to print
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square of integers.
 *@a: the matrix of intergers.
 *@size : the matrix's size.
 */


	void print_diagsums(int *a, int size)
	{
	int s1 = 0, s2 = 0, k;

	for (k = 0; k < size; k++)
	{
		s1 = s1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		s2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", s1, s2);
	}

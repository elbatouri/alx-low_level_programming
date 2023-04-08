#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate its square
 *
 * Return: the result of a square
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the root of the square
 * @n: number to  sqaure root
 * @i: square root
 *
 * Return: the square root
 */

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (square(n, i + 1));
	return (-1);
}

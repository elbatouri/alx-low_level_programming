#include "main.h"

int root_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate it's square root
 *
 * Return: the resultat of the  square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root_sqrt_recursion(n, 0));
}

/**
 * root_sqrt_recursion - recurses to find the natural
 * square root
 * @n: number to calculate the square of the root
 * @i: the square agent
 *
 * Return: the resulting square root
 */
int root_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (root_sqrt_recursion(n, i + 1));
}

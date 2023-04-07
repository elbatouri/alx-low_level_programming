#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate its square
 *
 * Return: the result of a square
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n));

}

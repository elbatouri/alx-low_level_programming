#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>



int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: the number1
 * @b: the number2
 *
 * Return:the sum of a and b
 */

	int op_add(int a, int b)
	{
	return (a + b);
	}
/**
 * op_sub - returns the difference of a and b
 * @a: the number1
 * @b: the number2
 *
 * Return: the difference between a and b
 */

	int op_sub(int a, int b)
	{
	return (a - b);
	}

/**
 * op_mul - returns the product of a and b
 * @a: the number1
 * @b: the number2
 *
 * Return:the multiplication between a and b
 */

	int op_mul(int a, int b)
	{
	return (a * b);
	}

/**
 * op_div - returns the result of the division of a by b
 * @a: the number1
 * @b: the number2
 *
 * Return: the division result of a and b
 */

	int op_div(int a, int b)
	{
	return (a / b);
	}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the number1
 * @b: the number2
 *
 * Return: the remainder of the division of a and b
 */

	int op_mod(int a, int b)
	{
	return (a % b);
	}

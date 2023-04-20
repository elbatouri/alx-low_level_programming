#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a pointer to the function print
 *
 *Return: a pointer to name.
 */

	void print_name(char *name, void (*f)(char *))
	{
	if (name == NULL || f == NULL)
		return;
	f(name);
	}

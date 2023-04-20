#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as
 *@array: the array
 *@size: the array size
 *@action: point to the function to excute
 *
 */

	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		if (array == NULL || action == NULL)
			return;
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}

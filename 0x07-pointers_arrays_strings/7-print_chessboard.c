#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array.
 *
 * Return: 0 when it's done.
 */

	void print_chessboard(char (*a)[8])
	{
		int k;
		int j;

		for (k = 0; k < 8; k++)
		{
			for (j = 0 ; j < 8 ; j++)

			_putchar(a[k][j]);
			_putchar('\n');
		}
	}

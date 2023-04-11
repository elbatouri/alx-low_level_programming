#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers.
 *@argc: the number of arguments in the array.
 *@argv: the arguments passed in the array.
 *
 * Return: 0( succes)
 */

	int main(int argc, char *argv[])
	{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int result = n1 * n2;

		if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		printf("%d\n", result);

		return (0);
	}

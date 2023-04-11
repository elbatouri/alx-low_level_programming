#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - add two numbers and print the result.
 * @argv: the arguments of the array.
 * @argc: the number of arguments in the array.
 *
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
	{
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
		for (int i = 1; i < argc; i++)
		{
			const char *arg = argv[i];

			for (int j = 0; arg[j] != '\0'; j++)
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(arg);
		}
		printf("%d\n", sum);
}

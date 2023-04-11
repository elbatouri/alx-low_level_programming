#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate the change of cents.
 * @argv: value of arrays.
 * @argc: the numbers of arrguments in an array.
 *
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{printf("Error\n");
		return (1);
    	}
    if (cents < 0)
    {
	    printf("0\n");
	return (0);
    }

    coins += cents / 25;
    cents %= 25;
    coins += cents / 10;
    cents %= 10;
    coins += cents / 5;
    cents %= 5;
    coins += cents / 2;
    cents %= 2;
    coins += cents;
    
    printf("%d\n", coins);
    return (0);
}


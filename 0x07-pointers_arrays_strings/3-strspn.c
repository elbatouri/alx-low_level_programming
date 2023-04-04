#include "main.h"
#include <stdio.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: the string that we ll search into
 *@accept: the prefix that we want to mesure
 *
 * Return: the job is done
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;
	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *@str: the string to create a duplica for.
 *
 *
 *Return: the duplicate.
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < 1)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
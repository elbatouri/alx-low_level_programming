#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 * @s: the string to locate the charcacter in
 * @c: the character to locate
 *
 * Return: the first occurence of @c or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

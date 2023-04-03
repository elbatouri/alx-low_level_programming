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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}

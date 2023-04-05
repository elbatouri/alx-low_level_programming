#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: the string to searched.
 * @needle: the sustring
 *
 * Return: a pointer the sustring if matched and null if not.
 */

	char *_strstr(char *haystack, char *needle)
	{
		for (; haystack != '\0'; haystack++)
		{
			char *a = haystack;
			char *b = needle;

			while (*a == *b && *b != '\0')
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return (haystack);
		}
		return (0);
	}

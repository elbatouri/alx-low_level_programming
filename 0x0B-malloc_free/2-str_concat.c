#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int i, cindex;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = cindex = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[cindex] != '\0')
		cindex++;
	cct = malloc(sizeof(char) * (i + cindex + 1));

	if (cct == NULL)
		return (NULL);
	i = cindex = 0;
	while (s1[i] != '\0')
	{
		cct[i] = s1[i];
		i++;
	}

	while (s2[cindex] != '\0')
	{
		cct[i] = s2[cindex];
		i++, cindex++;
	}
	cct[i] = '\0';
	return (cct);
}


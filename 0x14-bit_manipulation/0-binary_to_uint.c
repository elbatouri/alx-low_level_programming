#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary to convert
 *
 * Return: the coverted value as a unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i; /* declared to be used  for the loop */
	unsigned int conVal = 0; /* the converted value */

	if (!b)
		return (0); /* if value is empty */
	for (i = 0; b[i]; i++) /* loop to travers the intred binary */
	{
		if (b[i] < '0' || b[i] > '1') /* if value isnt binary */
			return (0);
		conVal = 2 * conVal + (b[i] - '0');
	}

	return (conVal);
}

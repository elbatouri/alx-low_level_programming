#include "main.h"
/**
** _memset - fill a memory with a constant byte
* @s: the first memory the be filled
* @b: the value to stop
* @n: number of byte to change
*
* Return: the array with new value for a number of bytes n
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

#include "main.h"
#include <stdio.h>
/**
* _strpbrk - search a bytes
*@s:the string that we are searching in.
*@accept:the bytes we are searching for.
*Return: if matched the pointer to the byte and if not it returns null
*/

	char *_strpbrk(char *s, char *accept)
	{
		int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
				if (*s == accept[a])
				return (s);
			}
	s++;
	}
return ('\0');
}

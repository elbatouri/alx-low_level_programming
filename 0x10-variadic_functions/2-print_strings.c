#include "variadic_functions.h"

/**
 * print_strings - print_strings
 * @separator: separator betwenn printed strings
 * @n: number of arguments
 *
 */

	void print_strings(const char *separator, const unsigned int n, ...)
	{
		unsigned int i;
		char *s;

		va_list list;

		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(list, char *);
			if (!s)
				s = "null";
			if (!separator)
				printf("%s", s);
			else if (separator && i == 0)
				printf("%s", s);
			else
				printf("%s%s", separator, s);
		}
			printf("\n");
			va_end(list);
	}

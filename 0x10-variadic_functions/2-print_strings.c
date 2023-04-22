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
		char *str;
		va_list stringList;

		va_start(stringList, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(stringList, char *);
			if (str == NULL)
				printf("(nil)");

			else
				printf("%s", str);

			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);

		}
			printf("\n");
			va_end(stringList);
	}

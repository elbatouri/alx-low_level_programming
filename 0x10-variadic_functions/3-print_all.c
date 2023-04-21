#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: types of arguments.
 */
	void print_all(const char * const format, ...)
	{
	int i = 0;
	char *st, *sp;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sp, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(list, double));
				break;
			case 's':
				st = va_arg(list, char *);
				if (!st)
					st = "(null)";
				printf("%s%s", sp, st);
				break;
			default:
				i++;
				continue;
		}
		sp = ", ";
		i++;
		}
	}
	}

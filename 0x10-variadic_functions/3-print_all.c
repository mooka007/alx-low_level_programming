#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - A function with 2 parameters
 * Owned By MoOka
 * @format: specifies the necessary operation
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *s = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", s, st);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

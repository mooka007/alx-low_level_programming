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
	int i;
	char *x;
	char *s;
	va_list op;

	va_start(op, format);
	i = 0;
	while (format && format[i])
	{
		s = "";
		if (format[i + 1])
		{
			s = ", ";
		}
		switch (format[i])
		{
			case 'c':
				printf("%c %s", va_arg(op, int), s);
				break;
			case 'i':
				printf("%d %s", va_arg(op, int), s);
				break;
			case 'f':
				printf("%f %s", va_arg(op, double), s);
				break;
			case 's':
				x = va_arg(op, char *);
				if (!x || !*x)
					x = "(nil)";
				printf("%s %s", x, s);
				break;
		}
		i++;
	}
	printf("\n");
}


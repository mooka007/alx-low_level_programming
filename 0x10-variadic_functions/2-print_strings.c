#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints strings
 * Owned By MoOka
 * @separator: String to be printed between strings
 * @n: number of strings passed
 * @...: A variable number
 * Return: 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list op;

	va_start(op, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{

		s = va_arg(op, char*);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(op);
}

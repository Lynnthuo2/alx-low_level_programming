#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator
 * @n: count of variables
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list temp;
	char *str;

	va_start(temp, n);
	for (j = 0; j < n; i++)
	{
		str = va_arg(temp, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%s", "(nil)");

		if (j < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(temp);
}

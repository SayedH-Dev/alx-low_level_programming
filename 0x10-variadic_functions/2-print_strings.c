#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - function that prints strings
  * @separator: pointer to a string
  * @n: no. of elements in the string
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;
	char *c;

	va_start(arg, n);

	for (x = 0 ; x < n ; x++)
	{
		c = va_arg(arg, char *);

		if (c != NULL)
		{
			printf("%s", c);
		}
		else
		{
			printf("(nil)");
		}
		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}

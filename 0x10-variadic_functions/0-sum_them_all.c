#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - function that return the sum of its parameters
  * @n: no. of arguments
  * Return: sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;
	int sum = 0;

	va_start(arg, n);

	for (x = 0 ; x < n ; x++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}

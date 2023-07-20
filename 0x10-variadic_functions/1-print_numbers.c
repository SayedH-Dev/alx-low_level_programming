#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers
 * @separator: pointer to a string 
 * @n: no. of integres
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	va_start(arg, n);
	unsigned int x;
	int num;

	for (x = 0 ; x < n ; x++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
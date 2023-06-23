#include "main.h"

/**
  * print_line - print a straight line
  * @n: check how long the line is
  * Return: void
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		_putchar('_');
	}

	_putchar('\n');
	}
}

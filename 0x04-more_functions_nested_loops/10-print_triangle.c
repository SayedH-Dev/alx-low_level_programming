#include "main.h"

/**
  * print_triangle - to print triangle
  * @size: check triangle size
  * Return: void
  */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int x;
	int y;

	for (x = 1 ; x <= size ; x++)
	{
		for (y = x ; y < size ; y++)
		{
			_putchar(' ');
		}
		for (y = 1 ; y <= x ; y++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

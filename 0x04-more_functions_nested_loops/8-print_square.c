#include "main.h"

/**
  * print_square - function to print square
  * @size: to check the size of the square
  * Return: void
  */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x;
		int y;

		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

#include "main.h"

/**
  * more_numbers - prints series of numbers from 0 to 14 for 10 times
  * Return: void
  */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 14 ; y++)
		{
			if (y >= 10)
				_putchar('0' + (y / 10));
				_putchar('0' + (y % 10));
		}

		_putchar('\n');
	}
}

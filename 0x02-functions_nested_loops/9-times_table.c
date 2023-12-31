#include "main.h"

/**
  * times_table - print 9 times table
  * Return: void
  */
void times_table(void)
{
	int x;
	int y;
	int total;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{
			total = x * y;
			if (y == 0)
			{
				_putchar(total + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (total <= 9)
				{
					_putchar(' ');
					_putchar(total + '0');
				}
				else
				{
					_putchar((total / 10) + '0');
					_putchar((total % 10) + '0');
				}
			}
		}

		_putchar('\n');

	}
}

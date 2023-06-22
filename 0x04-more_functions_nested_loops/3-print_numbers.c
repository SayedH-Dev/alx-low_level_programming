#include "main.h"

/**
  * print_numbers - print numbers from 0 to 9
  * Return: void
  */
void print_numbers(void)
{
	int i;

	if (i >= 0 && i <= 9)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}

#include "main.h"

/**
  * print_last_digit - print the last digit of a number
  * @r: number to be printed the last digit
  * Return: lad
  */
int print_last_digit(int r)
{
	int lad;

	if (r < 0)
	{
		lad = -(r % 10);
	}
	else
	{
		lad = r % 10;
	}

	_putchar('0' + lad);


	return (lad);
}

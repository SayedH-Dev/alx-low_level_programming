#include "main.h"

/**
  * print_last_digit - print the last digit of a number
  * @r: number to be printed the last digit
  * Return: 0
  */
int print_last_digit(int r)
{
	int lad;

	lad = r % 10;

	_putchar(lad);

	return (0);
}

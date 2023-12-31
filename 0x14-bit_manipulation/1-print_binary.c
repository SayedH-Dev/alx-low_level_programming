#include "main.h"

/**
  * print_binary - function that prints the binary representation of a num
  * @n: value that we want to print its binary representation
  * Return: void
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

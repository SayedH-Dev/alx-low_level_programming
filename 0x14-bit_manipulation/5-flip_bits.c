#include "main.h"

/**
  * flip_bits - function that calculate no. of bits to flip number to another
  * @n: first no. to be compared and flipped
  * @m: second no. to be compared and flipped
  * Return: no of flipped bits to convert n to m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int x;

	xor = n ^ m;
	x = 0;
	while (xor)
	{
		x++;
		xor = xor & (xor - 1);
	}
	return (x);
}


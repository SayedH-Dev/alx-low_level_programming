#include "main.h"

/**
  * get_bit - function that return the value of a bit at a given index
  * @n: binary number to be scanned
  * @index: the given index as the position for the bit
  * Return: bit value or -1 if the index is out of range
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}


#include "main.h"

/**
  * set_bit - function that set a bit to 1 at a given index
  * @n: pointer to the address of the value that needs to be turned to 1
  * @index: index of the bit we need to set to 1
  * Return: 1 if success or -1 if failed
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mv;

	if (index > 64)
		return (-1);

	mv = 1;

	mv = mv << index;

	*n = *n ^ mv;

	return (1);
}


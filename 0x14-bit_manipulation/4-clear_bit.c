#include "main.h"

/**
  * clear_bit - function that set a bit to 0 at a given index
  * @n: pointer to the address of the value that needs to be turned to 0
  * @index: index of the bit we need to set to 0
  * Return: 1 if sucess or -1 if failed
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n & (~(1UL << index));
	return (1);
}


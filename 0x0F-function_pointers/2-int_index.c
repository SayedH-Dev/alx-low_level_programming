#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - Function that searches for an integer
  * @array: array of integers
  * @size: size of array
  * @cmp: pointer to a function
  * Return: index of first element in the array or -1 if no element match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0 ; x < size ; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}

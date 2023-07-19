#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function as a parameter
  * on each element of an array
  * @array: pointer to array
  * @size: size of the array
  * @action: pointer to the function we want to apply on each element
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || size == 0 || !action)
		return;

	for (x = 0 ; x < size ; x++)
	{
		action(array[x]);
	}
}

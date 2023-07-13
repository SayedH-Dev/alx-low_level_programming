#include <stdlib.h>
#include "main.h"

/**
  * array_range - function that creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to the array
  */
int *array_range(int min, int max)
{
	int *p;
	int x;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (x = 0 ; min <= max ; x++, min++)
		p[x] = min;

	return (p);
}

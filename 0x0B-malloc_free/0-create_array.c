#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - function that creates an array starting with char
  * @size: size of array
  * @c: first character in the array
  * Return: pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *str;

	str = malloc(sizeof(c) * size);

	if (str == NULL || size == 0)
	{
		return (NULL);
	}

	for (x = 0 ; x <= size ; x++)
	{
		str[x] = c;
	}

	return (str);
}

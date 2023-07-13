#include "main.h"

/**
  * malloc_checked - function that allocates memory
  * @b: memory size
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}

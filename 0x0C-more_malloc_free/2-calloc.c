#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * _calloc - function allocating memory for an array
  * @nmemb: number of memory elements
  * @size: size of each element
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, nmemb *size);

	return (p);
}

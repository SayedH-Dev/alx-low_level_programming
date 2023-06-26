#include "main.h"

/**
  * swap_int - function to swap value of 2 int
  * @a: pointer to int
  * @b: pointer to int
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}

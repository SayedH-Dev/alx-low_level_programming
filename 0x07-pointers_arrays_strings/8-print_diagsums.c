#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - prints the sum of 2 diagonals of a square matrix
  * @a: pointer to the square matrix
  * @size: size of matrix
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int x;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (x = 0 ; x < size ; x++)
	{
		sum1 = sum1 + a[x * size + x];
		sum2 = sum2 + a[x * size + (size - 1 - x)];
	}

	printf("%d, %d\n", sum1, sum2);
}

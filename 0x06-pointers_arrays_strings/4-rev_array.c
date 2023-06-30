#include "main.h"

/**
  * reverse_array - reverse content of an array
  * @a: pointer to the array
  * @n: no. of elements in the array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int forward;
	int backward;
	int temp;

	forward = 0;
	backward = n - 1;

	while (forward < backward)
	{
		temp = a[forward];
		a[forward] = a[backward];
		a[backward] = temp;
		forward++;
		backward--;
	}
}

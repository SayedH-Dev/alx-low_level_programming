#include <stdio.h>
#include "main.h"

/**
  * _sqrt_helper - helper for natural square root function
  * @n: number to get the square root for
  * @i: number of times
  * Return: square root result
  */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
  * _sqrt_recursion - function to determine natural square root
  * @n: number to get the square root for
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

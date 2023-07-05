#include <stdio.h>
#include "main.h"
/**
  * _prime_helper - helper function to the prime function
  * @x: number to be checked
  * @y: number to be divided by
  * Return: 1 or 0
  */
int _prime_helper(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}

	return (_prime_helper(x, y - 1));
}

/**
  * is_prime_number - return 1 if the number is prime
  * @n: number to be checked
  * Return: 1 if prime or 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_prime_helper(n, n / 2));
}

#include <stdio.h>
#include "main.h"
/**
  * factorial - function to calculate factorial of a number
  * @n: integer to calculate the factorial value for
  * Return: factorial result
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

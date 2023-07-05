#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - function to return the value of power of number
  * @x: base number
  * @y: power
  * Return: 1 if y=0
  * -1 if y negative
  * x*_pow_recursion(x, y-1) if y positive
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

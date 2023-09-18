#include "3-calc.h"
#include <stdio.h>

/**
  * add - function that calculate the sum of two integers
  * @a: integer 1
  * @b: integer 2
  * Return: sum of a and b
  */
int add(int a, int b)
{
	return (a + b);
}

/**
  * sub - function that subtract two integers
  * @a: integer 1
  * @b: integer 2
  * Return: subtract b from a
  */
int sub(int a, int b)
{
	return (a - b);
}

/**
  * mul - function that multiplies two integers
  * @a: integer 1
  * @b: integer 2
  * Return: multi result
  */
int mul(int a, int b)
{
	return (a * b);
}

/**
  * div - function that divide two integers
  * @a: integer 1
  * @b: integer 2
 * Return: dividing result
 */
int div(int a, int b)
{
	return (a / b);
}

/**
  * mod - function that calculate the modulus of two integers
  * @a: integer 1
  * @b: integer 2
  * Return: modulus result
  */
int mod(int a, int b)
{
	return (a % b);
}

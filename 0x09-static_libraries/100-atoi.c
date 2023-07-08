#include "main.h"
#include <stdio.h>

/**
  * _atoi - function that turns string to integer
  * @s: string to bu turned to int
  * Return: result int
  */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;


	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

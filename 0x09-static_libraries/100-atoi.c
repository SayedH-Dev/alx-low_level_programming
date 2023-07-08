#include "main.h"
#include <stdio.h>

/**
  * _atoi - function that turns string to integer
  * @s: string to bu turned to int
  * Return: result int
  */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	return (result * sign);
}

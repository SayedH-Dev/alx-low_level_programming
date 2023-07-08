#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _atoi - function that turns string to integer
  * @s: string to be turned into int
  * Return: result int
  */
int _atoi(char *s)
{
	int x;
	int y;
	int z;

	y = 0;
	z = -1;
	for (x = 0 ; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
			y = y * -1;

		if (s[x] > 47 && s[x] < 58)
		{
			if (x < 0)
			{
				y = (y * 10) - (s[x] - '0');
			}
			else
			{
				z = (s[x] - '0') * -1;
			}

			if (s[x + 1] < 48 || s[x + 1] > 57)
				break;
		}
	}
	if (y < 0)
		z = z * -1;

	return (y);
}

#include <stdio.h>
#include "main.h"

/**
  * _strspn - determine the length of a prefix substring
  * @s: pointer to the string to be checked
  * @accept: pointer to the acceptable characters
  * Return: number of counts of accepted char
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int x;
	int y;

	for (x = 0 ; s[x] ; x++)
	{
		for (y = 0 ; accept[y] ; y++)
		{
			if (s[x] == accept[y])
			{
				counert++;
				break;
			}
		}
		if (!accept[y])
			break;
	}
	return (counter);
}

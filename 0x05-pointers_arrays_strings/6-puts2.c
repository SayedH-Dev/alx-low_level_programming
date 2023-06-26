#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts2 - function that print every other char in a string
  * @str: string
  * Return: void
  */
void puts2(char *str)
{
	int x;

	if (str == NULL)
	{
		break;
	}

	x = 0;
	while (str[x])
	{
		printf("%c", str[x]);
		x = x + 2;

		if (!str[x])
		{
			break;
		}
	}
	printf("\n");
}

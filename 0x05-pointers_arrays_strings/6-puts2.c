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

	for (x = 0 ; str[x] != '0' ; x++)
	{
		if (x % 2 == 0)
			printf("%c", str[x]);
	}

	printf("\n");
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts_half - print half of a string
  * @str: string
  * Return: void
  */
void puts_half(char *str)
{
	int l;
	int first;
	int x;

	l = strlen(str);
	first = (l - 1) / 2 + 1;

	for (x = first ; x < l ; x++)
	{
		printf("%c", str[x]);
	}

	printf("\n");
}

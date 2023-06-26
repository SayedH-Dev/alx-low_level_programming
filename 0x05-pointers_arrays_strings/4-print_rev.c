#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_rev - function print string in reverse
  * @s: string
  * Return: void
  */
void print_rev(char *s)
{
	int l;
	int x;

	l = strlen(s);

	for (x = l - 1 ; x >= 0 ; x--)
	{
		printf("%c", s[x]);
	}
	printf("\n");
}



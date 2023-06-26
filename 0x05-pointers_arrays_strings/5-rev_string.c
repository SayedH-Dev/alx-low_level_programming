#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rev_string - function that reverse a string
  * @s: string
  * Return: void
  */
void rev_string(char *s)
{
	int l;
	int x;
	int y;
	char store;

	l = strlen(s);

	for (x = 0, y = (l - 1) ; x < y ; x++, y--)
	{
		store = s[x];
		s[x] = s[y];
		s[y] = store;
	}
}

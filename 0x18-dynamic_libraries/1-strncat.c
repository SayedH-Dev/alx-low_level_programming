#include "main.h"

/**
  * _strncat - concatenate 2 strings
  * @dest: main string
  * @src: string to be connected
  * @n: no. of char from src
  * Return: concatenated string dest after modification
  */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = 0;

	return (dest);
}

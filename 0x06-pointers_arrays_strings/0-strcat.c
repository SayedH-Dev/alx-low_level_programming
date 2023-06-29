#include "main.h"

/**
  * *_strcat - concatenate 2 strings
  * @dest: main string
  * @src: string to be connected to dest
  * Return: concatenated string dest after modification
  */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	for (x = 0 ; dest[x] != '\0' ; x++)
	{
		;
	}
	for (y = 0 ; src[y] != '\0' ; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}

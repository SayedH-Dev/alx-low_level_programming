#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: string to be copied to
  * @src: sting to be copied
  * @n: no. of char to be copied
  * Return: dest after modification
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	for (x = 0 ; src[x] != '\0' && x < n ; x++)
	{
		dest[x] = src[x];
	}

	for (x = 0 ; x < n ; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}

#include "main.h"
#include <stddef.h>

/**
  * _strpbrk - indicates set of bytes within a string
  * @s: pointer to the string
  * @accept: set of bytes to be accepted
  * Return: address of the accepted byte or NULL in case it didn't match
  **/
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0 ; s[x] ; x++)
	{
		for (y = 0 ; accept[y] ; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}
	return (NULL);

}

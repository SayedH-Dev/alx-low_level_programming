#include <stdio.h>
#include "main.h"

/**
  * _strchr - locate a character in a string
  * @s: pointer to the string
  * @c: cahracter to be located
  * Return: pointer to the location
  */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}

	return (s + 1);
}

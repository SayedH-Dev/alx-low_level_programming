#include <stddef.h>
#include <stdio.h>
#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: pointer to the string where to search for @needle
  * @needle: pointer to the substring to look for
  * Return: pointer to @needle or NULL
  * if @needle note in @haystack return NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	for (x = 0 ; haystack[x] != '\0' ; x++)
	{
		for (y = 0 ; needle[y] != '\0' ; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (!needle[y])
			return (&haystack[x]);
	}

	return (NULL);
}

#include <stdio.h>
#include "main.h"

/**
  * *string_toupper - all lower case to uppercase in a string
  * @str: string to be checked for lowercase char
  * Return: string
  */
char *string_toupper(char *str)
{
	char *ptr;

	*ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (str);
}

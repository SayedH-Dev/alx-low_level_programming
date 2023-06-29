#include <stdio.h>
#include "main.h"

/**
  * *string_toupper - all lowercase to uppercase in a string
  * @str: string to be checked for lowercase char
  * Return: string
  */
char *string_toupper(char *str)
{
	int element;

	element = 0;

	while (str[element] != '\0')
	{
		if (str[element] >= 'a' && str[element] <= 'z')
		{
			str[element] = str[element] - 32;
		}
		element++;
	}

	return (str);
}

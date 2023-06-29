#include "main.h"

/**
  * *string_toupper - all lower case to uppercase in a string
  * @string: string to be checked for lowercase char
  * Return: string
  */
char *string_toupper(char *string)
{
	int counter;

	counter = 0;

	while (counter != '\0')
	{
		if (string[counter] >= 'a' && string[counter] <= 'z')
		{
			string[counter] = string[counter] - 32;
		}
		counter++;
	}

	return (string);
}

#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * str_concat - function to conacatenate 2 strings
  * @s1: string 1
  * @s2: string 2
  * Return: NULL if failure and pointer to the concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t str1 = strlen(s1);
	size_t str2 = strlen(s2);
	size_t sum = str1 + str2 + 1;

	char *conc_str;

	conc_str = malloc(sum);
	if (conc_str == NULL)
	{
		return (NULL);
	}
	strcpy(conc_str, s1);
	strcat(conc_str, s2);

	return (conc_str);
}

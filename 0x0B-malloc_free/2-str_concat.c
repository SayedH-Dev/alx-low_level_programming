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
		s1 = "";

	else if (s2 == NULL)
		s2 = "";

	else
	{
		char *conc = malloc(strlen(s1) + strlen(s2) + 1);

		if (conc == NULL)
			return (NULL);

		strcpy(conc, s1);
		strcat(conc, s2);

		return (conc);
	}
	char *conc = malloc(strlen(s1) + strlen(s2) + 1);

	if (conc == NULL)
		return (NULL);

	strcpy(conc, s1);
	strcat(conc, s2);

	return (conc);
}

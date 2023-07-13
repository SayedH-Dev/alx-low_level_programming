#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * string_nconcat - a function that concatenates n bytes of a string
  * to another
  * @s1: String 1
  * @s2: String 2
  * @n: max. no. of bytes availabe from s2
  * Return: the concatenated 2 strings
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	size_t ls1;
	size_t ls2;

	ls1 = strlen(s1);
	ls2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= ls2)
		n = ls2;

	conc = (char *)malloc(ls1 + n + 1);

	if (conc == NULL)
		return (NULL);

	strcpy(conc, s1);
	strncat(conc, s2, n);
	conc[ls1 + n] = '\0';

	return (conc);
}

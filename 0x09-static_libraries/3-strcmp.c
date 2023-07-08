#include "main.h"

/**
  * _strcmp - compares 2 strings
  * @s1: first string
  * @s2: second string
  * Return: s1>s2 - > 0 , s1=s2 - = 0 , s1<s2 - < 0
  */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}

		x++;
	}
	return (0);
}

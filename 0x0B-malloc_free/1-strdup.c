#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * _strdup - function that pointer to a newly allocated space for
  * a duplicated string
  * @str: given string to be copied
  * Return: NULL if str = NULL or pointer to the newly allocated space
  */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (strdup(str));
	}
}

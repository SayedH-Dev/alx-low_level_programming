#include <stdio.h>
#include "main.h"

/**
  * set_string - sets the value of @s to @to
  * @s: pointer to a pointer
  * @to: pointer to a char
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}

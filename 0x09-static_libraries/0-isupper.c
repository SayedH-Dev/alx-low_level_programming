#include "main.h"

/**
  * _isupper - check uppercase letters
  * @c: character to be checked
  * Return: 1 if upper & 0 if else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

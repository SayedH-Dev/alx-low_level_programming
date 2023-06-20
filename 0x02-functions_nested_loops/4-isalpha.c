#include "main.h"

/**
  * _isalpha - checking if letter
  * @c: int defined in main
  * Return: 1 if letter 0 if not
  */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}

return (0);
}

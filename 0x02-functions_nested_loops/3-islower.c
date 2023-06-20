#include "main.h"

/**
  * _islower - checking lower case
  * Return: 1 if lowercase 0 if not
  */

int _islower(int c)
{
	if (c >= 'a')
	{
		if (c <= 'z')
		{
			return (1);
			else
			{
				return (0);
			}
		}
	}

}

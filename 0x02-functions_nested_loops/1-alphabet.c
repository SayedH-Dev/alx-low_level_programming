#include "main.h"

/**
  * main - print alphabits
  * Return: void
  */

void print_alphabet(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	
	_putchar('\n');
	return;
}

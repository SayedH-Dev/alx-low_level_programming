#include "main.h"

/**
  * print_alphabet_x10 - print alphabet 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int n;
	char alpha;

	for (n = 0 ; n <= 9 ; n++)
	{
        alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	}

	_putchar('\n');
}

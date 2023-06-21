#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - print from number n to 98
  * @n: counting start number
  * Return: void
  */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		else
		{
			for (x = n ; x > 98 ; x--)
			{
				printf("%d", x);
				if (x != 98)
				{
					printf(", ");
				}
			}
		}

		printf("\n");
	}
}

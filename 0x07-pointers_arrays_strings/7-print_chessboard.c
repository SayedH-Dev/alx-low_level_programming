#include <stdio.h>
#include "main.h"

/**
  * print_chessboard - print a chessboard
  * @a: pointer to a 2D array
  * Return: void
  */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0 ; x < 8 ; x++)
	{
		for (y = 0 ; y < 8 ; y++)
		{
			printf("%c ", a[x][y]);
		}

		printf("\n");

	}
}

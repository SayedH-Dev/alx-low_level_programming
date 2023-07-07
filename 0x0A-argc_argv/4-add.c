#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
  * main - function that adds positive numbers and print sum
  * @argc: no. of command line arguments
  * @argv: array of strings and every element is an argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	else
	{
		int x;
		int y;
		int sum;

		sum = 0;

		for (x = 1 ; x < argc ; x++)
		{
			for (y = 0 ; argv[x][y] != '\0' ; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(argv[x]);
		}

		printf("%d\n", sum);
	}
	return (0);
}

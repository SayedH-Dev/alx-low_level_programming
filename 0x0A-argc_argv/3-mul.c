#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - function that multiplies 2 int arguments
  * @argc: no. of command line arguments
  * @argv: array of strings and every element is an argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int x;
	int y;
	int multi;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	multi = x * y;

	printf("%d\n", multi);

	return (0);
}

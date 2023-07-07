#include <stdio.h>
#include "main.h"

/**
  * main - function that prints all the arguments
  * @argc: no. of command line arguments
  * @argv: array of strings and every element is an argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int x;

	x = 1;

	for (x ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}

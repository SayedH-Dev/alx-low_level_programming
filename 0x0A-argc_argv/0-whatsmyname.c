#include <stdio.h>
#include "main.h"

/**
  * main - function that prints the name of a program file
  * @argc: no. of command line arguments
  * @argv: array of strings and every element is an argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

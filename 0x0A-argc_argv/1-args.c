#include <stdio.h>
#include "main.h"

/**
  * main - function that prints number of arguments
  * @argc: no. of command line arguments
  * @argv: array of strings and every element is an argument
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	
	return (0);
}

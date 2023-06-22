#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - testing sign
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	positive_or_negative(n);

	return (0);
}

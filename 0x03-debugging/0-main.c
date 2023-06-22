#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * positive_or_negative - checking number + - 0
  * @i: number to be checked
  * Return: void
  */
void positive_or_negative(int i)
{
int i;

srand(time(0));
i = rand() - RAND_MAX / 2;

if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}

/**
  * main - testing function
  * Return: 0
  */
int main(void)
{

	int i = 0;

	printf("testing zero= ");
	positive_or_negative(i);

	return (0);
}

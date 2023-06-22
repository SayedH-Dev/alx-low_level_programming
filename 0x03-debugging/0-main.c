#include "main.h"
#include <stdio.h>

/**
  * positive_or_negative - checking number sign
  * @i: number to be checked
  * Return: void
  */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
/**
  * main - testing zero
  * Return: 0
  */
int main(void)
{

	int i = 0;

	printf("testing zero= ");
	positive_or_negative(i);

	return (0);
}

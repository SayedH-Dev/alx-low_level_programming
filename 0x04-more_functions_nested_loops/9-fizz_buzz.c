#include "main.h"

/**
  * main - FizzBuzz test
  * Return: 0
  */
int main(void)
{
	int x;

	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			if (x % 5 == 0)
			{
				printf("FizzBuzz ");
			}
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", x);
		}
	}

	printf("%d", x);
	return (0);

}

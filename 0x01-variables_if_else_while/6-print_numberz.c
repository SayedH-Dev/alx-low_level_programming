#include <stdio.h>

/**
  * main - print digits using putchar
  * Return: 0
  */

int main(void)
{
int n;

for (n = 0 ; n <= 9 ; n++)
{
putchar(n + '0');
}

putchar('\n');

return (0);
}

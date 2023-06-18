#include <stdio.h>

/**
  * main - possible combination of 2 digits
  * Return: 0
  */

int main(void)
{
int x;
int y;

for (x = '0' ; x <= '8' ; x++)
{
for (y = x + 1 ; y <= '9' ; y++)
{
putchar(x);
putchar(y);
if (x != '8' && y != '9')
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

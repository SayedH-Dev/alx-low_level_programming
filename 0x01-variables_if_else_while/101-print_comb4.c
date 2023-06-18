#include <stdio.h>

/**
  * main - possible combination of 3 digits
  * Return: 0
  */

int main(void)
{
int x;
int y;
int z;

for (x = '0' ; x <= '7' ; x++)
{
for (y = x + 1 ; y <= '8' ; y++)
{
for (z = y + 1 ; z <= '9' ; z++)
{
putchar(x);
putchar(y);
putchar(z);
if (x != '7')
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
